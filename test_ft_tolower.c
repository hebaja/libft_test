#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"

Test(ft_tolower, lower_case_string) {
    char str[20] = "/|***NeVeRmOrE***|/";
    char expected[20] = "/|***nevermore***|/";

    for (int i = 0; str[i]; i++) {
        str[i] = ft_tolower(str[i]);
    }

    cr_assert_str_eq(str, expected, "Expected '%s' but got '%s'", expected, str);
}
