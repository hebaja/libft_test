#include "../libft.h"
#include "test.h"
#include <stdio.h>

char	strs[4][14] = { "Dream Theater\0", "Thin Lizzy\0", "Cripper\0", "Nevermore\0" };

void	del_nothing(void *p) {}

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

void	test_lst_map(t_list *lst)
{
	int	i;
	int	output;
	int	result;
	int	size;
	t_list	*current_lst;
	char	strs_up[4][14] = { "DREAM THEATER\0", "THIN LIZZY\0", "CRIPPER\0", "NEVERMORE\0" };
	int	sizes[4] = {ft_strlen(strs[0]), ft_strlen(strs[1]), ft_strlen(strs[2]), ft_strlen(strs[3]) };

	i = 0;
	result = 1;
	size = ft_lstsize(lst);
	current_lst = lst;
	while (current_lst)
	{
		output = ft_strncmp(current_lst->content, strs_up[i], ft_strlen(strs_up[i]));
		if (output) //if true, string are different
			result = 0;
		current_lst = current_lst->next;
		i++;
	}
	show(result);
}

void	test_ft_lstmap()
{
	int	result;
	int	output;
	printf(">>> FT_LSTMAP: ");
	result = 1;
	t_list	*n_lst;
	t_list	*lst = ft_lstnew(strs[3]);
	add_lst_node(&lst, strs[2]);
	add_lst_node(&lst, strs[1]);
	add_lst_node(&lst, strs[0]);
	n_lst = ft_lstmap(lst, test_map_iter, del_nothing); //writes iteration to file output.txt
	test_lst_map(n_lst);
}
