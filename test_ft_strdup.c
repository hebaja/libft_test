#include "../libft.h"
#include "test.h"

void	test_ft_strdup()
{
	int	output;
	int	result;
	char	*str = "Nevermore";
	char	*ptr;
	
	printf(">>> FT_STRDUP: ");
	result = 1;
	ptr = ft_strdup(str);
	output = ft_strncmp(ptr, "Nevermore", 9);
	if (output)
		result = 0;
	show(result);
	free(ptr);
}

