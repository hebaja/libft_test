#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"  // Include your header file with the prototype for ft_isalpha

// Test function using Criterion
Test(ft_isalpha_suite, test_ft_isalpha)
{
    int i;
    int output;

    for (i = 0; i < ASCII_LIMIT; i++)
    {
        output = ft_isalpha(i);

        // Expect 1 for alphabetic characters
        if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))
        {
            cr_expect_eq(output, 1, "ft_isalpha(%d) returned %d, expected 1", i, output);
        }
        else  // Expect 0 for non-alphabetic characters
        {
            cr_expect_eq(output, 0, "ft_isalpha(%d) returned %d, expected 0", i, output);
        }
    }
}
