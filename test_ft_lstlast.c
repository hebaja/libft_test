#include "../libft.h"
#include "test.h"

int	test_lstlast(t_list **lst, char *str, int s)
{
	int	output;
	int	size;
	t_list	*new_lst;
	t_list	*last_lst;
	t_list	*first_lst;

	new_lst = ft_lstnew(str);
	ft_lstadd_front(lst, new_lst);
	last_lst = ft_lstlast(*lst);
	first_lst = *lst;
	output = ft_strncmp(last_lst->content, "Thin Lizzy", 10);
	size = ft_lstsize(*lst);
	if (output) //If true strings are different
		return (0);
	output = ft_strncmp(first_lst->content, str, ft_strlen(str)); //Recently added lst must be first
	if (output) //If true strings are different
		return (0);
	if (size != s) //Tests size
		return (0);
	return (1);
}

void	test_ft_lstlast()
{
	int	result;
	int	output;
	int	size;
	t_list	*lst = ft_lstnew("Thin Lizzy"); //This lst must always be the last
	printf(">>> FT_LSTLAST: "); 
	result = 1;
	size = 1;
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
