#include "../libft.h"
#include "test.h"
#include <stdio.h>

int	test_lstsize_front(t_list **lst, char *str, int s)
{
	t_list	*l;
	int	size;

	l = ft_lstnew(str);
	ft_lstadd_front(lst, l);
	size = ft_lstsize(*lst);
	if (size != s)
		return (0);
	return (1);
}

int	test_lstsize_back(t_list **lst, char *str, int s)
{
	t_list	*l;
	int	size;

	l = ft_lstnew(str);
	ft_lstadd_back(lst, l);
	size = ft_lstsize(*lst);
	if (size != s)
		return (0);
	return (1);
}

void	test_ft_lstsize()
{
	int	result;
	int	output;
	int	size;
	char	*str1 = ft_strdup("Nevermore");
	char	*str2 = ft_strdup("Dream Theater");
	char	*str3 = ft_strdup("Cripper");
	char	*f1 = ft_strdup("Strawberry");
	char	*f2 = ft_strdup("Kiwi");
	char	*f3 = ft_strdup("Banana");
	char	*f4 = ft_strdup("Watermelon");
	t_list	*lst1 = ft_lstnew(str1);
	t_list	*lst2 = ft_lstnew(f1);
	printf(">>> FT_LSTSIZE: ");
	result = 1;
	size = 1;
	output = ft_lstsize(lst1);
	if (output != 1)
		result = 0;
	output = test_lstsize_front(&lst1, str2, ++size);
	if (!output)
		result = 0;
	output = test_lstsize_front(&lst1, str3, ++size);
	if (!output)
		result = 0;
	
	size = 1;
	output = test_lstsize_back(&lst2, f2, ++size);
	if (!output)
		result = 0;
	output = test_lstsize_back(&lst2, f3, ++size);
	if (!output)
		result = 0;
	output = test_lstsize_back(&lst2, f4, ++size);
	if (!output)
		result = 0;

	show(result);
	free(lst1);
	free(lst2);
}
