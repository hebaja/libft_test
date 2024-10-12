#include "criterion-2.4.2/include/criterion/criterion.h"
#include "../libft.h"

Test(ft_calloc, basic_test) {
    char *ptr = ft_calloc(1, 10);
    int *arr = ft_calloc(4, sizeof(int));
    
    cr_expect_str_eq(ptr, "\0\0\0\0\0\0\0\0\0");
    for (int i = 0; i < 4; i++) {
        cr_expect_eq(arr[i], 0);
    }

    free(ptr);
    free(arr);
}

// Test(ft_calloc, zero_size) {
//     cr_expect_null(ft_calloc(0, 10));
//     cr_expect_null(ft_calloc(10, 0));
// }

Test(ft_calloc, overflow_test) {
    cr_expect_null(ft_calloc(4, 536870912)); // Triggering potential overflow
}
