#include "../libft.h"
#include "test.h"

char	up(unsigned int i, char c)
{
	return (c - 32);
}

char	low(unsigned int i, char c)
{
	return (c + 32);
}

void	test_ft_strmapi()
{
	int	result;
	int	output;
	char	*str1 = "uppercase";
	char	*str2 = "LOWERCASE";
	char	*ptr1;

	printf(">>> FT_STRMAPI: ");
	result = 1;
	ptr1 = ft_strmapi(str1, up);
	output = ft_strncmp(ptr1, "UPPERCASE", 9);
	if (output)
		result = 0;
	ptr1 = ft_strmapi(str2, low);
	output = ft_strncmp(ptr1, "lowercase", 9);
	if (output)
		result = 0;
	show(result);
	free(ptr1);
}
