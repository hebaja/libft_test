#include "criterion-2.4.2/include/criterion/criterion.h"
#include "../libft.h"

Test(ft_toupper, upper_case_string) {
    char str[20] = "/|***NeVeRmOrE***|/";
    char expected[20] = "/|***NEVERMORE***|/";

    for (int i = 0; str[i]; i++) {
        str[i] = ft_toupper(str[i]);
    }

    cr_assert_str_eq(str, expected, "Expected '%s' but got '%s'", expected, str);
}
