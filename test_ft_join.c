#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"

Test(ft_strjoin, join_strings) {
    char *result = ft_strjoin("Never", "more");
    cr_assert_str_eq(result, "Nevermore", "Expected 'Nevermore' but got '%s'", result);
    free(result);

    result = ft_strjoin("Never", "");
    cr_assert_str_eq(result, "Never", "Expected 'Never' but got '%s'", result);
    free(result);

    result = ft_strjoin("", "more");
    cr_assert_str_eq(result, "more", "Expected 'more' but got '%s'", result);
    free(result);
}
