#include "test.h"

void	del_node_content(void *cont)
{
	ft_bzero(cont, ft_strlen(cont));
}
