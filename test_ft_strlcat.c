#include "criterion-2.4.2/include/criterion/criterion.h"
#include "../libft.h"

Test(ft_strlcat, basic)
{
    char    dst1[12] = "Lovely\0";
    char    src1[6] = " day!\0";
    char    dst2[6] = "Dream\0";
    char    src2[9] = " Theater\0";
    int     r_len;

    r_len = ft_strlcat(dst1, src1, 3);
    cr_assert_eq(r_len, 8, "Expected strlcat length to be 8 when n = 3");
    cr_assert_str_eq(dst1, "Lovely", "Expected dst1 to remain 'Lovely'");

    r_len = ft_strlcat(dst1, src1, 6);
    cr_assert_eq(r_len, 11, "Expected strlcat length to be 11 when n = 6");
    cr_assert_str_eq(dst1, "Lovely", "Expected dst1 to remain 'Lovely'");

    r_len = ft_strlcat(dst1, src1, 10);
    cr_assert_eq(r_len, 11, "Expected strlcat length to be 11 when n = 10");
    cr_assert_str_eq(dst1, "Lovely da", "Expected dst1 to be 'Lovely da'");

    r_len = ft_strlcat(dst2, src2, 14);
    cr_assert_eq(r_len, 13, "Expected strlcat length to be 13 when n = 14");
    cr_assert_str_eq(dst2, "Dream Theater", "Expected dst2 to be 'Dream Theater'");
}
