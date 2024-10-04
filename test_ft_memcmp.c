#include "../libft.h"
#include "test.h"

void	test_ft_memcmp()
{
	int	result;
	int	output;
	char	str1[5] = "ABCC\0";
	char	str2[5] = "ABCE\0";
	char	str3[5] = "ABCA\0";
	char	str4[5] = "ABCA\0";
	
	printf(">>> FT_MEMCMP: ");
	result = 1;
	output = ft_memcmp(str1, str2, 4);
	if (output != -2)
		result = 0;
	output = ft_memcmp(str2, str3, 4);
	if (output != 4)
		result = 0;
	output = ft_memcmp(str1, str2, 3);
	if (output)
		result = 0;
	output = ft_memcmp(str1, str2, 0);
	if (output)
		result = 0;
	output = ft_memcmp(str3, str4, 4);
	if (output)
		result = 0;
	show(result);
}
