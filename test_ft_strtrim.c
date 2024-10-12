#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"

Test(ft_strtrim, basic)
{
    char    *ptr = ft_strtrim("***Nevermore***", "***");
    cr_assert_str_eq(ptr, "Nevermore", "Expected strtrim to remove leading and trailing stars");
    free(ptr);
}
