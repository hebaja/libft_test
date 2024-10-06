#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "../libft.h"

void	iter_lst_fd(void *cont)
{
	char    *file = "output.txt";
	// remove(file);
    int fd_w = open(file, O_APPEND | O_WRONLY | O_CREAT, 0644);
	ft_putstr_fd(cont, fd_w);
	close(fd_w);
}
