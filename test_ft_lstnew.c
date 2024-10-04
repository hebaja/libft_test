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
	t_list	*str_lst;
	t_list	*arr_lst;
	str_lst = ft_lstnew((char *)str);
	output = ft_strncmp((char *)str_lst->content, "Nevermore", 9);
	if (result)
		output = 0;
	if(str_lst->next != NULL)
		output = 0;
	show(result);
	free(str_lst);
}
