#include "../libft.h"
#include "test.h"

void	test_ft_substr()
{
	int	result;
	int	output;
	char	*str = "***Nevermore***";
	char	*ptr;
	ptr = ft_substr(str, 3, 9);
	printf(">>> FT_SUBSTR: ");
	result = 1;
	output = ft_strncmp(ptr, "Nevermore", 9);
	if (output)
		result = 0;
	output = ft_strncmp(ptr, "moreNever", 9);
	if (!output)
		result = 0;
	ptr = ft_substr(str, 10, 15);
	if (ptr != NULL)
		result = 0;
	show(result);
	free(ptr);
}
