#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"

Test(ft_strnstr, basic)
{
    char    *big = "kernel panic";
    char    *little = "pan";
    char    *not_found = "zzz";
    char    *empty = "";
    char    *ptr;

    ptr = ft_strnstr(big, little, 12);
    cr_assert_str_eq(ptr, "panic", "Expected strnstr to find 'panic'");

    ptr = ft_strnstr(big, little, 8);
    cr_assert_null(ptr, "Expected strnstr to return NULL when not found");

    ptr = ft_strnstr(big, not_found, 12);
    cr_assert_null(ptr, "Expected strnstr to return NULL when string is not found");

    ptr = ft_strnstr(big, empty, 12);
    cr_assert_str_eq(ptr, big, "Expected strnstr to return original string when searching for an empty string");
}
