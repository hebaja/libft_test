#include "../libft.h"
#include "test.h"

void	test_ft_strchr()
{
	char	*str = "Beneath the Demon Moon.\0";
	char	*ptr1;
	char	*ptr2;
	int	output;
	int	result;

	printf(">>> FT_STRCHR: ");
	result = 1;
	ptr1 = ft_strchr(str, 'D');
	ptr2 = ft_strchr(str, '\0');
	output = ft_strncmp(ptr1, "Demon Moon.", 11);
	if (output)
		result = 0;
	if (&str[12] != ptr1)
		result = 0;
	if(*ptr2 != '\0')
		result = 0;
	if(ptr2 != &str[23])
		result = 0;
	show(result);
}
