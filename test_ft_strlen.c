#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"  // Include your header file with the prototypes

Test(ft_strlen_suite, test_ft_strlen)
{
    char *str = "Hello world!";
    char *str2 = " ";
    char *str3 = "";

    // Test 1: Check length of "Hello world!"
    cr_expect_eq(ft_strlen(str), 12, "ft_strlen(\"%s\") returned %d, expected 12", str, ft_strlen(str));

    // Test 2: Check length of a single space " "
    cr_expect_eq(ft_strlen(str2), 1, "ft_strlen(\"%s\") returned %d, expected 1", str2, ft_strlen(str));

    // Test 3: Check length of an empty string ""
    cr_expect_eq(ft_strlen(str3), 0, "ft_strlen(\"%s\") returned %d, expected 0", str3, ft_strlen(str));
}
