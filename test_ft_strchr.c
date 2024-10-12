#include "criterion-2.4.2/include/criterion/criterion.h"
#include "../libft.h"

Test(ft_strchr, basic_test) {
    char *str = "Beneath the Demon Moon.";
    
    char *ptr1 = ft_strchr(str, 'D');
    cr_expect_str_eq(ptr1, "Demon Moon.", "Failed to find 'D'.");

    char *ptr2 = ft_strchr(str, '\0');
    cr_expect_eq(ptr2, str + 23, "Failed to find null terminator.");

    ptr1 = ft_strchr(str, 'B' + 256);
    cr_expect_str_eq(ptr1, "Beneath the Demon Moon.", "Failed to find B");
}
