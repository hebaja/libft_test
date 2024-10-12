#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"

Test(ft_strlcpy, basic)
{
    char    src[12] = "Lovely day!\0";
    char    *dest = (char *)malloc(sizeof(char) * 7);
    int     r_len;

    r_len = ft_strlcpy(dest, src, 7);
    cr_assert_str_eq(dest, "Lovely", "Expected dest to be 'Lovely'");
    cr_assert_eq(r_len, 11, "Expected strlcpy to return length 11");
    free(dest);
}
