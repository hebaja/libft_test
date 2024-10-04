#ifndef TEST_H
# define TEST_H

#include <stdio.h>
#include <fcntl.h>
#include "../libft.h"

# define ASCII_LIMIT 127

void	show(int result);
void	test_ft_isalpha();
void	test_ft_isdigit();
void	test_ft_isalnum();
void	test_ft_isascii();
void	test_ft_isprint();
void	test_ft_strlen();
void	test_ft_strlen();
void 	test_ft_memset();
void	test_ft_bzero();
void	test_ft_memcpy();
void	test_ft_memmove();
void	test_ft_strlcpy();
void	test_ft_strlcat();
void	test_ft_toupper();
void	test_ft_tolower();
void	test_ft_strchr();
void	test_ft_strrchr();
void	test_ft_strncmp();
void	test_ft_memchr();
void	test_ft_memcmp();
void	test_ft_strnstr();
void	test_ft_atoi();
void	test_ft_strdup();
void	test_ft_calloc();
void	test_ft_substr();
void	test_ft_strjoin();
void	test_ft_strtrim();
void	test_ft_split();
void	test_ft_itoa();
void	test_ft_strmapi();
void	test_ft_striteri();
void	test_ft_putchar_fd();
void	test_ft_putstr_fd();
void	test_ft_putendl_fd();
void	test_ft_putnbr_fd();
void	test_ft_lstnew();
void	test_ft_lstadd_front();
void	test_ft_lstsize();
void	test_ft_lstlast();
void	test_ft_lstadd_back();
void	test_ft_lstdelone();
void	test_ft_lstclear();
void	test_ft_lstiter();
void	test_ft_lstmap();
void	del_node_content(void *cont);
void	add_node(t_list **lst, t_list *l, char *str);
void	add_lst_node(t_list **lst, char *str);
void	iter_lst_show(void *cont);
void	test_del();

#endif
