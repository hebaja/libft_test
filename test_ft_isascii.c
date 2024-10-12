#include "criterion-2.4.2/include/criterion/criterion.h"
#include "../libft.h"

Test(ft_isascii, basic_test) {
    for (int i = -2; i < 130; i++) {
        if (i >= 0 && i <= 127) {
            cr_expect(ft_isascii(i) != 0, "Value %d should be ASCII", i);
        } else {
            cr_expect(ft_isascii(i) == 0, "Value %d should not be ASCII", i);
        }
    }
}
