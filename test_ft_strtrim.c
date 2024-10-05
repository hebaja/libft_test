#include "../libft.h"
#include "test.h"
#include <stdio.h>

void	test_ft_strtrim()
{
	int	result;
	int	output;
	char	*set1 = "***\0";
	char	*set2 = "zzz\0";
	char	*str1 = "***Nevermore***\0";
	char	*str2 = "zzzzazzz\0";
	char	*str3 = "zzzzzzzzz\0";
	char	*ptr;
	printf(">>> FT_STRTRIM: ");
	result = 1;
	ptr = ft_strtrim(str1, set1);
	output = ft_strncmp(ptr, "Nevermore", 9);
	if (output)
		result = 0;
	ptr = ft_strtrim(str1, set2);
	output = ft_strncmp(ptr, "***Nevermore***", 15);
	if (output)
		result = 0;
	ptr = ft_strtrim(str2, set2);
	output = ft_strncmp(ptr, "a", 1);
	if (output)
		result = 0;
	ptr = ft_strtrim(str3, set2);
	output = ft_strncmp(ptr, "", 1);
	if (output)
		result = 0;
	ptr = ft_strtrim(str3, "z");
	if (ptr[0] != '\0')
		result = 0;
	show(result);
	free(ptr);
}
