#include "criterion-2.4.2/include/criterion/criterion.h"
#include "../libft.h"

Test(ft_memmove, basic_test) {
    char str[12] = "abcdefghijk";

    cr_expect_str_eq(ft_memmove(str + 4, str, 7), "abcdefg");
}
