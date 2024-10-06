#include "../libft.h"
#include "test.h"

char	strs_a[4][14] = { "Dream Theater\0", "Thin Lizzy\0", "Cripper\0", "Nevermore\0" };
char	strs_b[5][11] = { "Strawberry\0", "Mango\0", "Guava\0", "Watermelon\0", "Banana\0" };

void	populate_list(t_list **lst, int strs_type, int strs_size)
{
	int	i;

	i = 0;
	if (strs_type)
		while (++i < strs_size)
			add_lst_node(lst, strs_b[i]);
	else
		while (++i < strs_size)
			add_lst_node(lst, strs_a[i]);
}

void	test_del()
{
	int	result;
	int	output;
	int	size;
	t_list	*lst_a = ft_lstnew(strs_a[0]);
	t_list	*lst_b = ft_lstnew(strs_b[0]);
	populate_list(&lst_a, 0, 4);
	populate_list(&lst_b, 1, 5);
	printf(">>> TEST_DEL: ");
	result = 1;
	// Test lst_a
	size = ft_lstsize(lst_a);
	if (size != 4) // Checks size of lst_a
		result = 0;
	ft_lstclear(&lst_a, del_node_content);
	size = ft_lstsize(lst_a);
	if (size != 0) // Checks size of lst_a after clearing since 1st node
		result = 0;
	// Test lst_b
	size = ft_lstsize(lst_b);
	if (size != 5) // Checks size of lst_b
		result = 0;
	ft_lstclear(&lst_b->next->next, del_node_content);
	size = ft_lstsize(lst_b);
	if (size != 2) // Checks size of lst_b after clearing since 3rd node
		result = 0;
	show(result);
}
