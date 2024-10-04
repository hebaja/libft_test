#include "../libft.h"
#include "test.h"

void  test_ft_memchr()
{
	char	*str = "Nevermore";
	int	arr[10] = {0,1,2,3,4,5,6,7,8,9};
	char	c = 'm';
	int	result;
	int	output;
	char	*ptr1;
	int	*ptr2;

	printf(">>> FT_MEMCHR: ");
	result = 1;
	ptr1 = ft_memchr(str, c, 8);
	ptr2 = ft_memchr(arr, 6, sizeof(int) * 10);
	output = ft_strncmp(ptr1, "more", 4);
	if (output)
		result = 0;
	if (ptr1 != &str[5])
		result = 0;
	if (*ptr2 != 6)
		result = 0;
	if (ptr2 != &arr[6])
		result = 0;
	show(result);
  

}
