#ifndef TEST_H
# define TEST_H

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include "../libft.h"

# define ASCII_LIMIT 127

void	add_lst_node(t_list **lst, char *str);
void	add_node(t_list **lst, t_list *l, char *str);
void	iter_lst_fd(void *cont);
void	del_node_content(void *cont);

#endif
