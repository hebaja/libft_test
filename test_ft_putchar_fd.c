#include "../libft.h"
#include "test.h"

void	test_ft_putchar_fd()
{
	int	result;
	char    *file = "output.txt";
	char	buf[1];
	char	c;
	int	fd_w = open(file, O_TRUNC | O_WRONLY);
	int     fd_o = open(file, O_RDONLY);

	printf(">>> FT_PUTCHAR_FD: ");
	result = 1;
	if (fd_w == -1)
		printf("file not found.");
	ft_putchar_fd('c', fd_w);
	read(fd_o, buf, 1);
	c = buf[0];
	if (c != 'c')
		result = 0;
	show(result);
	close(fd_w);
	close(fd_o);
}
