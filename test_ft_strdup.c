#include "criterion-2.4.2/include/criterion/criterion.h"
#include "../libft.h"

Test(ft_strdup, basic)
{
    char    *str = "Nevermore";
    char    *ptr = ft_strdup(str);

    cr_assert_str_eq(ptr, "Nevermore", "Expected ft_strdup to return 'Nevermore'");
    free(ptr);
}
