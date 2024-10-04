#include "../libft.h"
#include "test.h"

void	test_ft_memset()
{
	char	str[22] = "Let the cut run deep.\0";
	int	result;

	result = 1;
	printf(">>> FT_MEMSET: ");
	ft_memset(str + 8, '.', 3);
	result = !ft_strncmp(str, "Let the ... run deep.\0", 22);
	show(result);
}
