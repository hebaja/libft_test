#include "../libft.h"
#include "test.h"

void	test_ft_substr()
{
	int	result;
	int	output;
	int	size;
	char	*str = "Nevermore";
	char	*ptr;
	printf(">>> FT_SUBSTR: ");
	result = 1;
	ptr = ft_substr(str, 0, 9);
	output = ft_strncmp(ptr, "Nevermore", 9);
	if (output)
		result = 0;
	ptr = ft_substr(str, 5, 4);
	output = ft_strncmp(ptr, "more", 4);
	if (output)
		result = 0;
	ptr = ft_substr(str, 11, 5);
	output = ft_strncmp(ptr, "", 1);
	if (output)
		result = 0;
	ptr = ft_substr(str, 5, 6);
	output = ft_strncmp(ptr, "more", 4);
	if (output)
		result = 0;
	size = ft_strlen(ptr);
	if (size != 4)
		result = 0;

	show(result);
	free(ptr);
}
