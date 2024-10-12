#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"

void	up_p(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

void	low_p(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

Test(ft_striteri, basic)
{
    char    str1[10];
    char    str2[14];

    ft_strlcpy(str1, "nEvErMoRe", 10);
    ft_strlcpy(str2, "DrEaM ThEaTeR", 14);

    ft_striteri(str1, up_p);
    cr_assert_str_eq(str1, "NEVERMORE", "Expected str1 to be 'NEVERMORE' after ft_striteri with up_p");

    ft_striteri(str2, low_p);
    cr_assert_str_eq(str2, "dream theater", "Expected str2 to be 'dream theater' after ft_striteri with low_p");
}
