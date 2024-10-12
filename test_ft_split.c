#include "criterion-2.4.2/include/criterion/criterion.h"
#include "../libft.h"

Test(ft_split, basic_test) {
    char *str1 = "banana*apple*grapes*pineapple";
    char *expected1[4] = {"banana", "apple", "grapes", "pineapple"};
    char **result1 = ft_split(str1, '*');

    for (int i = 0; i < 4; i++) {
        cr_expect_str_eq(result1[i], expected1[i], "Splitting '%s' failed at index %d", str1, i);
    }
    cr_expect_null(result1[4]);

    char *str2 = "**one****two***   *three**four***";
    char *expected2[5] = {"one", "two", "   ", "three", "four"};
    char **result2 = ft_split(str2, '*');

    for (int i = 0; i < 5; i++) {
        cr_expect_str_eq(result2[i], expected2[i], "Splitting '%s' failed at index %d", str2, i);
    }
    cr_expect_null(result2[5]);

    free(result1);
    free(result2);
}
