#include "../libft.h"
#include "test.h"

int	test_add_back(t_list **lst, char *str, int s)
{
	int	output;
	int	size;
	t_list	*l;
	t_list	*l_f;
	t_list	*l_l;

	l = ft_lstnew((char *)str);
	ft_lstadd_back(lst, l);
	l_f = *lst;
	l_l = ft_lstlast(*lst);
	output = ft_strncmp(l_l->content, str, 9);
	if (output)
		return (0);
	output = ft_strncmp(l_f->content, "Nevermore", ft_strlen(str));
	if (output)
		return (0);
	size = ft_lstsize(*lst);
	if (size != s)
		return (0);
	return (1);
}

void	test_ft_lstadd_back()
{
	int	result;
	int	output;
	int	size;
	char	*str1 = ft_strdup("Nevermore");
	char	*str2 = ft_strdup("Dream Theater");
	char	*str3 = ft_strdup("Cripper");
	char	*str4 = ft_strdup("Thin Lizzy");
	t_list	*lst = ft_lstnew(str1);
	printf(">>> FT_LSTADD_BACK: ");
	result = 1;
	size = 1;
	output = test_add_back(&lst, str2, ++size);
	if (!output)
		result = 0;
	output = test_add_back(&lst, str3, ++size);
	if (!output)
		result = 0;
	output = test_add_back(&lst, str4, ++size);
	if (!output)
		result = 0;
	show(result);
	free(lst);
}
