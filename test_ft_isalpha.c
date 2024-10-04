#include "../libft.h"
#include "test.h"

void	test_ft_isalpha()
{
	int	i;
	int	result;
	int	output;

	i = 0;
	result = 1;
	printf(">>> FT_ISALPHA: ");
	while (i < ASCII_LIMIT)
	{
		output = ft_isalpha(i);
		if (output == 1 && i < 65 || output == 0 && (i >= 65 && i <= 90) 
				|| output == 1 && (i > 90 && i < 97)
				|| output == 0 && (i >= 97 && i <= 122)
				|| output == 1 && i > 122)
			result = 0;
		i++;
	}
	show(result);
}
