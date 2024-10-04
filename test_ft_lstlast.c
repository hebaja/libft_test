#include "../libft.h"
#include "test.h"

int	test_lstlast(t_list **lst, char *str, int s)
{
	int	output;
	int	size;
	t_list	*l;
	t_list	*l_l;
	t_list	*l_f;

	l = ft_lstnew(str);
	ft_lstadd_front(lst, l);
	l_l = ft_lstlast(*lst);
	l_f = *lst;
	output = ft_strncmp(l_l->content, "Nevermore", 9);
	size = ft_lstsize(*lst);
	if (output)
		return (0);
	output = ft_strncmp(l_f->content, str, ft_strlen(str));
	if (output)
		return (0);
	if (size != s)
		return (0);
	return (1);
}

void	test_ft_lstlast()
{
	int	result;
	int	output;
	int	size;
	t_list	*lst = NULL;
	printf(">>> FT_LSTLAST: ");
	result = 1;
	size = 0;
	output = test_lstlast(&lst, "Nevermore", ++size);
	if (!output)
		result = 0;
	output = test_lstlast(&lst, "Dream Theater", ++size);
	if (!output)
		result = 0;
	output = test_lstlast(&lst, "Cripper", ++size);
	if (!output)
		result = 0;
	show(result);
	free(lst);
}
