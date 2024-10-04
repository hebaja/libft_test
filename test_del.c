#include "../libft.h"
#include "test.h"

void	test_del()
{
	int	result;
	int	output;
	char	*str1 = ft_strdup("Nevermore");
	char	*str2 = ft_strdup("Thin Lizzy");
	char	*str3 = ft_strdup("Cripper");
	char	*str4 = ft_strdup("Dream Theater");
	t_list	*l1 = ft_lstnew(str1);
	t_list	*l2 = ft_lstnew(str2);
	t_list	*l3 = ft_lstnew(str3);
	t_list	*l4 = ft_lstnew(str4);
	t_list	*lst1 = l1;
	char	*f1 = ft_strdup("Strawberry");
	char	*f2 = ft_strdup("Mango");
	char	*f3 = ft_strdup("Guava");
	char	*f4 = ft_strdup("Watermelon");
	char	*f5 = ft_strdup("Banana");
	t_list	*l_f1 = ft_lstnew(f1);
	t_list	*l_f2 = ft_lstnew(f2);
	t_list	*l_f3 = ft_lstnew(f3);
	t_list	*l_f4 = ft_lstnew(f4);
	t_list	*l_f5 = ft_lstnew(f5);
	t_list	*lst2 = l_f1;
	printf(">>> TEST_DEL: ");
	add_node(&lst1, l2, str2);
	add_node(&lst1, l3, str3);
	add_node(&lst1, l4, str4);
	add_node(&lst2, l_f2, f2);
	add_node(&lst2, l_f3, f3);
	add_node(&lst2, l_f4, f4);
	add_node(&lst2, l_f5, f5);
	ft_lstiter(lst1, iter_lst_show);
	printf("%d\n", ft_lstsize(lst1));
	printf(">>> TEST_DEL: ");
	ft_lstdelone(l3, del_node_content);
	ft_lstiter(lst1, iter_lst_show);
	printf("%d\n", ft_lstsize(lst1));
	printf(">>> TEST_DEL: ");
	ft_lstiter(lst2, iter_lst_show);
	printf("%d\n", ft_lstsize(lst2));
	printf(">>> TEST_DEL: ");
	ft_lstclear(&lst2, del_node_content);
	ft_lstiter(lst2, iter_lst_show);
	printf("%d\n", ft_lstsize(lst2));
}
