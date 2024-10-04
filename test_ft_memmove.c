#include "../libft.h"
#include "test.h"

void	test_ft_memmove()
{
	int	result;
	int output;
	char	str[12] = "abcdefghijk\0";
	char	*str_result;

	printf(">>> FT_MEMMOVE: ");
	result = 1;
	str_result = ft_memmove(str + 4, str, 7);
	output = ft_strncmp(str_result, "abcdefg", 12);
	if (output)
		result = 0;
	output = ft_strncmp(str, "abcdabcdefg", 12);
	if (output)
		result = 0;
	show(result);
}
