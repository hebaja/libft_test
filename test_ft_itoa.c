#include "criterion-2.4.2/include/criterion/criterion.h"
#include "../libft.h"

Test(ft_itoa, basic_test) {
    cr_expect_str_eq(ft_itoa(42), "42");
    cr_expect_str_eq(ft_itoa(-42), "-42");
    cr_expect_str_eq(ft_itoa(0), "0");
    cr_expect_str_eq(ft_itoa(2147483647), "2147483647");
    cr_expect_str_eq(ft_itoa(-2147483648), "-2147483648");
}
