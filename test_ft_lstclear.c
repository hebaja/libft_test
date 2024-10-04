#include "../libft.h"
#include "test.h"

void	test_clear_add(t_list **lst, char *str)
{
	t_list	*l;

	l = ft_lstnew((char *)str);
	ft_lstadd_front(lst, l);
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
	lst = NULL;
	printf(">>> FT_LSTCLEAR: ");
	test_clear_add(&lst, str1);
	test_clear_add(&lst, str2);
	test_clear_add(&lst, str3);
	test_clear_add(&lst, str4);
	ft_lstclear(&lst, del_clear);
	if (lst != NULL)
		result = 0;
	show(result);
}
