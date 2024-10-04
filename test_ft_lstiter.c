#include "../libft.h"
#include "test.h"

void	test_ft_lstiter()
{
	int	result;
	int	output;
	char	*str = ft_strdup("Nevermore");
	t_list	*lst = ft_lstnew(str);
	char	strs[3][14] = { "Cripper\0", "Thin Lizzy\0", "Dream Theater\0" };
	printf(">>> FT_LSTITER: ");
	add_lst_node(&lst, strs[0]);
	add_lst_node(&lst, strs[1]);
	add_lst_node(&lst, strs[2]);
	ft_lstiter(lst, iter_lst_show);
	printf("\n");
}
