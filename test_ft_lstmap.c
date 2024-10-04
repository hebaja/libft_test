#include "../libft.h"
#include "test.h"
#include <stdio.h>

void	del_nothing(void *p) {}

void	map_up(int *c)
{
	ft_toupper(*c);
}

void	*test_map_iter(void *cont)
{
	int	i;
	char	*str;
	char	*n_content;

	i = -1;
	str = ft_strdup(cont);
	n_content = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[++i])
		n_content[i] = ft_toupper(str[i]);
	n_content[++i] = '\0';
	return n_content;
}

void	test_ft_lstmap()
{
	int	result;
	int	output;
	char	*str1 = ft_strdup("Nevermore");
	char	*str2 = ft_strdup("Thin Lizzy");
	char	*str3 = ft_strdup("Cripper");
	char	*str4 = ft_strdup("Dream Theater");
	t_list	*lst = ft_lstnew(str1);
	t_list	*n_lst;
	printf(">>> FT_LSTMAP: ");
	add_lst_node(&lst, str2);
	add_lst_node(&lst, str3);
	add_lst_node(&lst, str4);
	ft_lstiter(lst, iter_lst_show);
	printf("\n");
	n_lst = ft_lstmap(lst, test_map_iter, del_nothing);
	printf(">>> FT_LSTMAP: ");
	ft_lstiter(n_lst, iter_lst_show);
	printf("\n");
}
