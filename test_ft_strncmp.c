#include "criterion-2.4.2/include/criterion/criterion.h"
#include "../libft.h"

Test(ft_strncmp, basic)
{
    cr_assert_eq(ft_strncmp("ABC", "AB", 3), 67, "Expected strncmp result to be 67 for 'ABC' vs 'AB' with 3 characters");
    cr_assert_eq(ft_strncmp("ABC", "AB", 2), 0, "Expected strncmp result to be 0 for 'ABC' vs 'AB' with 2 characters");
}
