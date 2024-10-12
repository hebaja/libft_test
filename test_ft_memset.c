#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"

Test(ft_memset, basic_test) {
    char str[22] = "Let the cut run deep.\0";
    ft_memset(str + 8, '.', 3);
    cr_expect_str_eq(str, "Let the ... run deep.");
}
