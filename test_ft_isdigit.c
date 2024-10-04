#include "../libft.h"
#include "test.h"

void	test_ft_isdigit()
{
	int	i;
	int	result;
	int	output;

	i = 0;
	result = 1;
	printf(">>> FT_ISDIGIT: ");
	while (i < 127)
	{
		output = ft_isdigit(i);
		if (output == 1 && i < 48 || output == 1 && i > 57
				|| output == 0 && (i >= 48 && i <= 57))
			result = 0;
		i++;
	}
	show(result);
}
