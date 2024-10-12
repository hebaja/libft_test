#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"

char	up(unsigned int i, char c)
{
	(void)i;
	return (c - 32);
}

char	low(unsigned int i, char c)
{
	(void)i;
	return (c + 32);
}

Test(ft_strmapi, basic)
{
    char    *str1 = "uppercase";
    char    *str2 = "LOWERCASE";
    char    *ptr1;

    ptr1 = ft_strmapi(str1, up);
    cr_assert_str_eq(ptr1, "UPPERCASE", "Expected str1 to be 'UPPERCASE'");
    free(ptr1);

    ptr1 = ft_strmapi(str2, low);
    cr_assert_str_eq(ptr1, "lowercase", "Expected str2 to be 'lowercase'");
    free(ptr1);
}
