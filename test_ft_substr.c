#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"

Test(ft_substr, extract_substring) {
    char *ptr = ft_substr("Nevermore", 0, 9);
    cr_assert_str_eq(ptr, "Nevermore", "Expected 'Nevermore' but got '%s'", ptr);
    free(ptr);

    ptr = ft_substr("Nevermore", 5, 4);
    cr_assert_str_eq(ptr, "more", "Expected 'more' but got '%s'", ptr);
    free(ptr);

    ptr = ft_substr("Nevermore", 11, 5);
    cr_assert_str_eq(ptr, "", "Expected empty string but got '%s'", ptr);
    free(ptr);
}
