#include "criterion-2.4.2/include/criterion/criterion.h"
#include "../libft.h"
#include "test.h"

Test(ft_putnbr_fd, basic_test) {
    char *file = "outputs/putnbr.txt";
    char buf[6];
    int fd_w = open(file, O_TRUNC | O_WRONLY | O_CREAT, 0664);
    int fd_o = open(file, O_RDONLY);

    cr_assert_neq(fd_w, -1, "File open error.");

    ft_putnbr_fd(123450, fd_w);

    read(fd_o, buf, 6);

    cr_expect_str_eq(buf, "123450", "Number written does not match.");
    close(fd_w);
    close(fd_o);
}
