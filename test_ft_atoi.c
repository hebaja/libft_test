#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"

Test(ft_atoi, basic_tests) {
    cr_expect_eq(ft_atoi("1234"), 1234);
    cr_expect_eq(ft_atoi("-1234"), -1234);
    cr_expect_eq(ft_atoi("1234     "), 1234);
    cr_expect_eq(ft_atoi("1234abc456"), 1234);
    cr_expect_eq(ft_atoi("   \r \v \n   +35689"), 35689);
}

Test(ft_atoi, invalid_inputs) {
    cr_expect_eq(ft_atoi("_1234"), 0);
    cr_expect_eq(ft_atoi("\0 1234"), 0);
    cr_expect_eq(ft_atoi("-+1234"), 0);
    cr_expect_eq(ft_atoi("--1234"), 0);
    cr_expect_eq(ft_atoi("+-1234"), 0);
    cr_expect_eq(ft_atoi("++1234"), 0);
    cr_expect_eq(ft_atoi(" a 1234"), 0);
}
