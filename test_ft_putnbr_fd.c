#include "../libft.h"
#include "test.h"

void	test_ft_putnbr_fd()
{
	int	result;
	int	output;
	char	buf[6];
	char    *file = "output.txt";
	char	*ptr;
	int	fd_w = open(file, O_TRUNC | O_WRONLY);
	int     fd_o = open(file, O_RDONLY);

	printf(">>> FT_PUTNBR_FD: ");
	result = 1;
	if (fd_w == -1)
		printf("file not found.");
	ft_putnbr_fd(123450, fd_w);
	read(fd_o, buf, 6);
	ptr = buf;
	output = ft_strncmp(ptr, "123450", 6);
	if (output)
		result = 0;
	show(result);
	close(fd_w);
	close(fd_o);
}
