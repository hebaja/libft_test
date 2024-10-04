#include "../libft.h"
#include "test.h"
#include <stdio.h>

void	test_ft_bzero()
{
	char	str[17] = "zero this string\0";
	int	result;

	printf(">>> FT_BZERO: ");
	ft_bzero(str + 5, 4);
	result = !ft_strncmp(str, "zero \0", 6);
	show(result);
}
