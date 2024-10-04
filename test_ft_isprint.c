#include "../libft.h"
#include "test.h"

void	test_ft_isprint()
{
	int i;
	int	result;
	int	output;

	i = 0;
	result = 1;
	printf(">>> FT_ISPRINT: ");
	while (i < ASCII_LIMIT + 1)
	{
		output = ft_isprint(i);
		if (output == 1 && i < 32 || output == 0 && (i >= 32 && i <= 126)
			|| output == 1 && i > 126)
			result = 0;
		i++;
	}
	show(result);
}
