#include "../libft.h"
#include "test.h"

void	up_p(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

void	low_p(unsigned int i, char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

void	test_ft_striteri()
{
	int	result;
	int	output;
	char	*str1;
	char	*str2;

	str1 = (char *)malloc(sizeof(char) * 10);
	str2 = (char *)malloc(sizeof(char) * 14);
	ft_strlcpy(str1, "nEvErMoRe", 10);
	ft_strlcpy(str2, "DrEaM ThEaTeR", 14);

	printf(">>> FT_STRITERI: ");
	result = 1;
	ft_striteri(str1, up_p);
	output = ft_strncmp(str1, "NEVERMORE", 9);
	if (output)
		result = 0;
	ft_striteri(str2, low_p);
	output = ft_strncmp(str2, "dream theater", 13);
	if (output)
		result = 0;
	show(result);
}
