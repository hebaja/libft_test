#include "../libft.h"
#include "test.h"

void	test_ft_strjoin()
{
	int	result;
	int	output;
	char	*str1 = "Never\0";
	char	*str2 = "more\0";
	char	*str3 = "Never\0land";
	char	*ptr;

	printf(">>> FT_STRJOIN: ");
	ptr = ft_strjoin(str1, str2);
	output = ft_strncmp(ptr, "Nevermore", 9);
	if (output)
		result = 0;
	ptr = ft_strjoin(str1, "");
	output = ft_strncmp(ptr, "Never", 5);
	if (output)
		result = 0;
	ptr = ft_strjoin("", str2);
	output = ft_strncmp(ptr, "more", 4);
	if (output)
		result = 0;
	ptr = ft_strjoin(str3, str2);
	output = ft_strncmp(ptr, "Nevermore", 9);
	if (output)
		result = 0;
	show(result);
}
