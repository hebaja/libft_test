#include "../libft.h"
#include "test.h"
#include <stdio.h>

void	test_ft_toupper()
{
	int	i;
	char c;
	int	output;
	int	result;
	char	str[20] = "/|***NeVeRmOrE***|/\0";

	printf(">>> FT_TOUPPER: ");
	i = 0;
	result = 1;
	while (str[i])
	{
		c = ft_toupper(str[i]);
		str[i] = c;
		i++;
	}
	output = ft_strncmp(str, "/|***NEVERMORE***|/", 20);
	if (output)
		result = 0;
	show(result);
}
