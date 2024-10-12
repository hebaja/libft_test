#include "criterion-2.4.2/include/criterion/criterion.h"
#include "../libft.h" 
#include <stdio.h>

Test(ft_strrchr, locate_last_occurrence) {
    char *str = "Beneath the Demon Moon.";
    char *ptr;

    ptr = ft_strrchr(str, 'e');
    cr_assert_str_eq(ptr, "emon Moon.", "Expected 'emon Moon.' but got '%s'", ptr);

    ptr = ft_strrchr(str, '\0');
    cr_assert_eq(ptr, str + 23, "Expected pointer to the end of string.");

    ptr = ft_strrchr(str, 'Z');
    cr_assert_null(ptr, "Expected NULL for non-existent character.");

	ptr = ft_strrchr(str, 'D' + 256);

	printf("-> %s\n", str);

    cr_expect_str_eq(ptr, "Demon Moon.", "Failed to find D");
}
