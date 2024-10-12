#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"

Test(ft_isdigit, basic_test) {
    for (int i = 0; i < 128; i++) {
        if (i >= '0' && i <= '9') {
            cr_expect(ft_isdigit(i) != 0, "Character %c should be a digit", i);
        } else {
            cr_expect(ft_isdigit(i) == 0, "Character %c should not be a digit", i);
        }
    }
}
