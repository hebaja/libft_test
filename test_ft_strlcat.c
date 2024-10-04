#include "../libft.h"
#include "test.h"
#include <stdio.h>

void	test_ft_strlcat()
{
	char	dst1[12] = "Lovely\0";
	char	src1[6] = " day!\0";
	char	dst2[6] = "Dream\0";
	char	src2[9] = " Theater\0";
	int	result;
	int	output;
	int	r_len;

	printf(">>> FT_STRLCAT: ");
	result = 1;
	r_len = ft_strlcat(dst1, src1, 3);
	output = ft_strncmp(dst1, "Lovely\0", 7);
	if (output)
		result = 0;
	if (r_len != 8)
		result = 0;
	r_len = ft_strlcat(dst1, src1, 6);
	output = ft_strncmp(dst1, "Lovely\0", 7);
	if (output)
		result = 0;
	if (r_len != 11)
		result = 0;
	r_len = ft_strlcat(dst1, src1, 10);
	output = ft_strncmp(dst1, "Lovely da\0", 10);
	if (output)
		result = 0;
	if (r_len != 11)
		result = 0;
	r_len = ft_strlcat(dst2, src2, 14);
	output = ft_strncmp(dst2, "Dream Theater\0", 14);
	if (output)
		result = 0;
	if (r_len != 13)
		result = 0;
	show(result);
}
