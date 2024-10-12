#include "criterion-2.4.2/include/criterion/criterion.h"
#include "../libft.h"

Test(ft_memcmp, basic_test) {
    char str1[5] = "ABCC";
    char str2[5] = "ABCE";
    char str3[5] = "ABCA";

    cr_expect_eq(ft_memcmp(str1, str2, 4), -2);
    cr_expect_eq(ft_memcmp(str2, str3, 4), 4);
    cr_expect_eq(ft_memcmp(str1, str2, 3), 0);
}
