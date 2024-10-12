#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"

char	strs[4][14] = { "Dream Theater\0", "Thin Lizzy\0", "Cripper\0", "Nevermore\0" };

void	_del_nothing(void *p) 
{
	(void)p;
}

void	map_up(int *c)
{
	ft_toupper(*c);
}

void	*test_map_iter(void *cont)
{
	int	i;
	char	*str;
	char	*n_content;

	i = -1;
	str = ft_strdup(cont);
	n_content = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[++i])
		n_content[i] = ft_toupper(str[i]);
	n_content[++i] = '\0';
	return n_content;
}

Test(ft_lstmap, list_mapped_uppercase)
{
	t_list	*lst;
	t_list	*n_lst;
	t_list	*current_lst;
	int	i;
	int	result;
	char	strs_up[4][14] = { "DREAM THEATER\0", "THIN LIZZY\0", "CRIPPER\0", "NEVERMORE\0" };

	// Create the initial linked list
	lst = ft_lstnew(strs[3]);
	ft_lstadd_front(&lst, ft_lstnew(strs[2]));
	ft_lstadd_front(&lst, ft_lstnew(strs[1]));
	ft_lstadd_front(&lst, ft_lstnew(strs[0]));

	// Apply ft_lstmap
	n_lst = ft_lstmap(lst, test_map_iter, _del_nothing);

	// Test if the content of the new list is uppercased correctly
	current_lst = n_lst;
	i = 0;
	result = 1;
	while (current_lst)
	{
		int output = ft_strncmp(current_lst->content, strs_up[i], ft_strlen(strs_up[i]));
		if (output != 0)  // Strings are different
			result = 0;
		current_lst = current_lst->next;
		i++;
	}

	cr_expect(result == 1, "List mapping did not transform all strings to uppercase correctly.");

	// Clean up memory
	ft_lstclear(&lst, _del_nothing);
	ft_lstclear(&n_lst, _del_nothing);
}
