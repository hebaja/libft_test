#include "../libft.h"
#include "test.h"

void	test_ft_calloc()
{
	int	i;
	int	result;
	int	output;
	char	*ptr;
	char	*zero_ptr;
	int	*arr;
	int *arr_overflow;

	printf(">>> FT_CALLOC: ");
	i = -1;
	result = 1;
	ptr = ft_calloc(1, 10);
	arr = ft_calloc(4, 10);
	ft_strlcpy(ptr, "Nevermore", 10);
	output = ft_strncmp(ptr, "Nevermore", 9);
	if (output)
		result = 0;
	while (++i < 10)
		arr[i] = i;
	i = -1;
	while (++i < 10)
	{
		if (arr[i] != i)
			result = 0;
	}
	zero_ptr = ft_calloc(0, 10);
	if (zero_ptr == NULL)
		result = 0;
	zero_ptr = ft_calloc(10, 0);
	if (zero_ptr == NULL)
		result = 0;
	arr_overflow = ft_calloc(4, 536870912);
	if (arr_overflow != NULL)
		result = 0;
	show(result);
	free(ptr);
	free(arr);
	free(zero_ptr);
	free(arr_overflow);
}
