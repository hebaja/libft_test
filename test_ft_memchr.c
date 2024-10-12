#include "criterion-2.4.2/include/criterion/criterion.h"
#include "../libft.h"

Test(ft_memchr, basic_test) {
    char *str = "Nevermore";
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    cr_expect_str_eq(ft_memchr(str, 'm', 9), "more");
    cr_expect_eq(ft_memchr(arr, 6, sizeof(arr)), &arr[6]);
    cr_expect_null(ft_memchr(str, 'N', 0));
}
