#include "criterion-2.4.2/include/criterion/criterion.h"
#include "../libft.h"
#include "test.h"

Test(ft_isalnum, basic_test) {
    for (int i = 0; i < ASCII_LIMIT; i++) {
        if ((i >= '0' && i <= '9') || (i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z')) {
            cr_expect(ft_isalnum(i) != 0, "Character %c should be alphanumeric", i);
        } else {
            cr_expect(ft_isalnum(i) == 0, "Character %c should not be alphanumeric", i);
        }
    }
}
