#include "../libft.h"
#include "test.h"

void	test_ft_putendl_fd()
{
	int	result;
	int	output;
	char	buf[10];
	char    *file = "output.txt";
	char	*str;
	char	*ptr;
	int	fd_w = open(file, O_TRUNC | O_WRONLY | O_CREAT, 0664);
	int     fd_o = open(file, O_RDONLY);

	str = (char *)malloc(sizeof(char) * 10);
	ft_strlcpy(str, "Nevermore", 10);

	printf(">>> FT_PUTENDL_FD: ");
	result = 1;
	if (fd_w == -1)
		printf("file not found.");
	ft_putendl_fd(str, fd_w);
	read(fd_o, buf, 10);
	ptr = buf;
	output = ft_strncmp(ptr, "Nevermore\n", 10);
	if (output)
		result = 0;
	show(result);
	close(fd_w);
	close(fd_o);
}
