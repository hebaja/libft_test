#include "../libft.h"
#include "test.h"

void	test_ft_putstr_fd()
{
	int	result;
	int	output;
	char	buf[10];
	char    *file = "output.txt";
	char	*str = "Nevermore";
	char	*ptr;
	int	fd_w = open(file, O_TRUNC | O_WRONLY | O_CREAT, 0664);
	int     fd_o = open(file, O_RDONLY);

	printf(">>> FT_PUTSTR_FD: ");
	result = 1;
	if (fd_w == -1)
		printf("file not found.");
	ft_putstr_fd(str, fd_w);
	read(fd_o, buf, 10);
	ptr = buf;
	output = ft_strncmp(ptr, "Nevermore", 9);
	if (output)
		result = 0;
	show(result);
	close(fd_w);
	close(fd_o);
}
