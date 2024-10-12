#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"

Test(ft_putchar_fd, basic_test) {
    char *file = "outputs/putchar.txt";
    char buf[1];
    int fd_w = open(file, O_TRUNC | O_WRONLY | O_CREAT, 0664);
    int fd_o = open(file, O_RDONLY);

    cr_assert_neq(fd_w, -1, "File open error.");

    ft_putchar_fd('c', fd_w);

    read(fd_o, buf, 1);

    cr_expect_eq(buf[0], 'c', "Character written does not match.");
    close(fd_w);
    close(fd_o);
}
