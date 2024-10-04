#include "../libft.h"
#include "test.h"

void	test_ft_memcpy()
{
	int	result;
	int	output;
	char	*mem_res;
	char	mem_dest[12] = "live to die\0";
	char	mem_src[3] = "**\0";

	printf(">>> FT_MEMCPY: ");
	result = 1;
	mem_res = ft_memcpy(mem_dest + 5, mem_src, 2);
	output = ft_strncmp(mem_dest, "live ** die\0", 12);
	if (output)
		result = 0;
	output = ft_strncmp(mem_res, "** die\0", 7);
	if (output)
		result = 0;
	show(result);
}
