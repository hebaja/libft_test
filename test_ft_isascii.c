#include "../libft.h"
#include "test.h"

void	test_ft_isascii()
{
	int	i;
	int	result;
	int	output;

	i = -2;
	result = 1;
	printf(">>> FT_ISASCII: ");
	while (i < ASCII_LIMIT + 3)
	{
		output = ft_isascii(i);
		if (output == 1 && i < 0 || output == 0 && (i >= 0 && i <= 127) || output == 1 && i > 127)
			result = 0;
		i++;
	}
	show(result);
}
