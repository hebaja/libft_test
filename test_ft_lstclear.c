#include "../libft.h"
#include "test.h"

void	test_clear_add(t_list **lst, char *str)
{
	t_list	*new_lst;

	new_lst = ft_lstnew((char *)str);
	ft_lstadd_front(lst, new_lst);
}

void	del_clear(void *p)
{
	free(p);
}

void	test_ft_lstclear()
{
	int	result;
	int	output;
	t_list	*lst;
	char	*str1 = ft_strdup("Nevermore");
	char	*str2 = ft_strdup("Cripper");
	char	*str3 = ft_strdup("Thin Lizzy");
	char	*str4 = ft_strdup("Dream Theater");
	lst = ft_lstnew(str1);
	printf(">>> FT_LSTCLEAR: ");
	test_clear_add(&lst, str2);
	test_clear_add(&lst, str3);
	test_clear_add(&lst, str4);
	ft_lstclear(&lst, del_clear);
	if (lst != NULL)
		result = 0;
	show(result);
}
