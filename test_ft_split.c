#include "../libft.h"
#include "test.h"

void	test_ft_split()
{
	int	i;
	int	result;
	int	output;
	char	*str1 = "banana*apple*grapes*pineapple";
	char	mtx1[4][10] = {"banana\0", "apple\0", "grapes\0", "pineapple\0"};
	int	lens1[4] = {6,5,6,9};
	char	*str2 = "**one****two***   *three**four***";
	char	mtx2[5][6] = {"one\0", "two\0", "   \0", "three\0", "four\0"};
	int	lens2[5] = {3,3,3,5,4};
	char	c1 = '*';
	char	**strs;

	printf(">>> FT_SPLIT: ");
	i = -1;
	result = 1;
	strs = ft_split(str1, c1);
	while (++i < 4)
	{
		if (ft_strncmp(strs[i], mtx1[i], lens1[i]))
			result = 0;
	}
	if (strs[4] != NULL)
		result = 0;
	strs = ft_split(str2, c1);
	i = -1;
	while (++i < 5)
	{
		if (ft_strncmp(strs[i], mtx2[i], lens2[i]))
			result = 0;
	}
	if (strs[5] != NULL)
		result = 0;
	show(result);
	free(strs);
}
