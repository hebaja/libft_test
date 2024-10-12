#include <string.h>  // For strncmp
#include "../libft.h"    // Include your header file with the prototypes
#include "criterion-2.4.2/include/criterion/criterion.h"

Test(ft_memcpy_suite, test_ft_memcpy)
{
    char mem_dest[12] = "live to die\0";
    char mem_src[3] = "**\0";
    char *mem_res;
    int output;

    // Perform the memcpy operation
    mem_res = ft_memcpy(mem_dest + 5, mem_src, 2);

    // Test 1: Check if the destination memory contains the expected result
    output = strncmp(mem_dest, "live ** die\0", 12);
    cr_expect_eq(output, 0, "ft_memcpy() resulted in \"%s\", expected \"live ** die\"", mem_dest);

    // Test 2: Check if the returned pointer points to the correct memory area
    output = strncmp(mem_res, "** die\0", 7);
    cr_expect_eq(output, 0, "ft_memcpy() returned \"%s\", expected \"** die\"", mem_res);
}
