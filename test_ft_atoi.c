#include "../libft.h"
#include "test.h"

void	test_ft_atoi()
{
	int	result;
	int	output;

	printf(">>> FT_ATOI: ");
	result = 1;
	output = ft_atoi("1234");
	if (output != 1234)
		result = 0;
	output = ft_atoi("-1234");
	if (output != -1234)
		result = 0;
	output = ft_atoi("1234     ");
	if (output != 1234)
		result = 0;
	output = ft_atoi("1234abc456");
	if (output != 1234)
		result = 0;
	output = ft_atoi("	   \r \v \n   +35689");
	if (output != 35689)
		result = 0;
	output = ft_atoi("_1234");
	if (output)
		result = 0;
	output = ft_atoi("\0 1234");
	if (output)
		result = 0;
	output = ft_atoi("-+1234");
	if (output)
		result = 0;
	output = ft_atoi("--1234");
	if (output)
		result = 0;
	output = ft_atoi("+-1234");
	if (output)
		result = 0;
	output = ft_atoi("++1234");
	if (output)
		result = 0;
	output = ft_atoi(" a 1234");
	if (output)
		result = 0;
	show(result);
}
