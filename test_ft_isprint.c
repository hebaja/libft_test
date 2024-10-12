#include "criterion-2.4.2/include/criterion/criterion.h"
#include "../libft.h"

Test(ft_isprint, basic_test) {
    for (int i = 0; i <= 127; i++) {
        if (i >= 32 && i <= 126) {
            cr_expect(ft_isprint(i) != 0, "Character %c should be printable", i);
        } else {
            cr_expect(ft_isprint(i) == 0, "Character %c should not be printable", i);
        }
    }
}
