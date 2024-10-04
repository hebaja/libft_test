#include "../libft.h"
#include "test.h"

void	test_ft_strlen()
{
	char	*str = "Hello world!";
	char	*str2 = " ";
	char	*str3 = "";
	char	*str4;
	int	i;
	int	output;
	int	result;

	i = 0;
	result = 1;
	printf(">>> FT_STRLEN: ");
	output = ft_strlen(str);
	if (output != 12)
		result = 0;
	output = ft_strlen(str2);
	if (output != 1)
		result = 0;
	output = ft_strlen(str3);
	if (output != 0)
		result = 0;
	show(result);
}
