#include "../libft.h"
#include "test.h"

void	test_ft_itoa()
{
	int	result;
	int	output;
	char	*str;

	printf(">>> FT_ITOA: ");
	result = 1;

	str = ft_itoa(42);
	output = ft_strncmp(str, "42", 2);
	if (output)
		result = 0;
	str = ft_itoa(-42);
	output = ft_strncmp(str, "-42", 3);
	if (output)
		result = 0;
	str = ft_itoa(0);
	output = ft_strncmp(str, "0", 1);
	if (output)
		result = 0;
	str = ft_itoa(2147483647);
	output = ft_strncmp(str, "2147483647", 10);
	if (output)
		result = 0;
	str = ft_itoa(-2147483648);
	output = ft_strncmp(str, "-2147483648", 11);
	if (output)
		result = 0;
	show(result);
	free(str);
}
