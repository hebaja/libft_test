#include "../libft.h"
#include "test.h"

void	test_ft_isalnum()
{
	int	i;
	int	result;
	int	output;

	i = 0;
	result = 1;
	printf(">>> FT_ISALNUM: ");
	while (i < ASCII_LIMIT)
	{
		output = ft_isalnum(i);
		if (output == 1 && i < 48 || output == 0 && (i >= 48 && i <= 57)
				|| output == 1 && (i > 57 && i < 65)
				|| output == 0 && (i >= 65 && i <= 90)
				|| output == 1 && (i > 90 && i < 97)
				|| output == 0 && (i >= 97 && i <= 122)
				|| output == 1 && i > 122)
			result = 0;
		i++;
	}
	show(result);
}
