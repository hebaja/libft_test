#include "../libft.h"
#include "test.h"

void	test_ft_strlcpy()
{
	char	src[12] = "Lovely day!\0";
	char	*dest;
	int	result;
	int	output;
	int	r_len;

	printf(">>> FT_STRLCPY: ");
	result = 1;
	dest = (char *)malloc(sizeof(char) * 7);
	r_len = ft_strlcpy(dest, src, 7);
	output = ft_strncmp(dest, "Lovely\0", 7);
	if (output)
		result = 0;
	if (r_len != 11)
		result = 0;
	show(result);
}
