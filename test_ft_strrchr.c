#include "../libft.h"
#include "test.h"

void	test_ft_strrchr()
{
	char	*str = "Beneath the Demon Moon.\0";
	char	*ptr1;
	char	*ptr2;
	char	*ptr3;
	int	output;
	int	result;

	printf(">>> FT_STRRCHR: ");
	result = 1;
	ptr1 = ft_strrchr(str, 'e');
	ptr2 = ft_strrchr(str, '\0');
	output = ft_strncmp(ptr1, "emon Moon.", 10);
	if (output)
		result = 0;
	if (&str[13] != ptr1)
		result = 0;
	if(*ptr2 != '\0')
		result = 0;
	if(ptr2 != &str[23])
		result = 0;
	ptr3 = ft_strrchr(str, 'Z');
	if(ptr3 != NULL)
		result = 0;
	show(result);
}
