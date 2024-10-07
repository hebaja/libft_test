#include "../libft_bonus.h"

void	add_lst_node(t_list **lst, char *str)
{
	t_list	*l;

	l = ft_lstnew((char *)str);
	ft_lstadd_front(lst, l);
}
