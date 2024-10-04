#include "../libft.h"
#include "test.h"

void	test_ft_strnstr()
{
	int	result;
	int	output;
	char	*big = "kernel panic";
	char	*little = "pan";
	char	*not_found = "zzz";
	char	*last = "c";
	char	*empty = "";
	char	*ptr;

	printf(">>> FT_STRNSTR: ");
	result = 1;
	ptr = ft_strnstr(big, little, 12);
	output = ft_strncmp(ptr, "panic", 5);
	if (output)
		result = 0;
	ptr = ft_strnstr(big, little, 11);
	output = ft_strncmp(ptr, "panic", 5);
	if (output)
		result = 0;
	ptr = ft_strnstr(big, little, 10);
	output = ft_strncmp(ptr, "panic", 5);
	if (output)
		result = 0;
	ptr = ft_strnstr(big, little, 9);
	if (ptr != 0)
		result = 0;
	ptr = ft_strnstr(big, little, 8);
	if (ptr != 0)
		result = 0;
	ptr = ft_strnstr(big, not_found, 12);
	if (ptr != 0)
		result = 0;
	ptr = ft_strnstr(big, empty, 12);
	if (ptr == 0)
		result = 0;
	output = ft_strncmp(ptr, "kernel panic", 12);
	if (output)
		result = 0;
	ptr = ft_strnstr(big, last, 12);
	if (ptr == 0)
		result = 0;
	output = ft_strncmp(ptr, "c", 1);
	if (output)
		result = 0;
	show(result);


}

