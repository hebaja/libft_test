#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"

Test(ft_bzero, basic_test) {
    char str[17] = "zero this string\0";
    ft_bzero(str + 5, 4);
    cr_expect_str_eq(str, "zero \0this string");
}
