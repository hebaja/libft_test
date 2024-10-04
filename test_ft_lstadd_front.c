#include "../libft.h"
#include "test.h"

int	test_add_front(t_list **lst, char *str, int s)
{
	int	output;
	t_list *l;
	int	size;

	l = ft_lstnew((char *)str);
	ft_lstadd_front(lst, l);
	output = ft_strncmp((char *)l->content, str, 9);
	size = ft_lstsize(*lst);
	if (output)
		return (0);
	if (s < 2)
	{
		if (l->next != NULL)
			return (0);
	}
	else
	{
		if (l->next == NULL)
			return (0);
	}
	if (size != s)
		return (0);
	return (1);
}

void	test_ft_lstadd_front()
{
	int	result;
	int	output;
	int	size;
	char	*str1 = ft_strdup("Nevermore");
	char	*str2 = ft_strdup("Dream Theater");
	char	*str3 = ft_strdup("Cripper");
	t_list	*lst = ft_lstnew(str1);
	printf(">>> FT_LSTADD_FRONT: ");
	result = 1;
	size = 1;
	output = test_add_front(&lst, str2, ++size);
	if (!output)
		result = 0;
	output = test_add_front(&lst, str3, ++size);
	if (!output)
		result = 0;
	show(result);
	free(lst);
}
