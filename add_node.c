#include "../libft_bonus.h"

void	add_node(t_list **lst, t_list *l, char *str)
{
	l = ft_lstnew((char *)str);
	ft_lstadd_front(lst, l);
}
