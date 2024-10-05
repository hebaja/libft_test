#include "../libft.h"
#include "test.h"

void	test_ft_lstnew()
{
	int	i;
	int	result;
	int	output;
	char	*str = "Nevermore";
	printf(">>> FT_LSTNEW: ");
	result = 1;
	output = 1;
	i = -1;
	t_list	*lst;
	t_list	*arr_lst;
	lst = ft_lstnew((char *)str);
	output = ft_strncmp((char *)lst->content, "Nevermore", 9);
	if (result)
		output = 0;
	if(lst->next != NULL)
		output = 0;
	show(result);
	free(lst);
}
