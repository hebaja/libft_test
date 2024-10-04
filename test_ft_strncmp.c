#include "test.h"
#include "../libft.h"

void	test_ft_strncmp()
{
	int	output;
	int	result;
	char	*str1 = "ABC";
	char	*str2 = "AB";
	
	printf(">>> FT_STRNCMP: ");
	result = 1;
	output = ft_strncmp(str1, str2, 3);
	if (output != 67)
		result = 0;
	output = ft_strncmp(str1, str2, 2);
	if (output)
		result = 0;
	show(result);
}
