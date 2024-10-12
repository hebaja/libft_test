#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"

Test(ft_putstr_fd, basic_test) {
    char *file = "outputs/putstr.txt";
    char buf[10];
    char *str = "Nevermore";
    int fd_w = open(file, O_TRUNC | O_WRONLY | O_CREAT, 0664);
    int fd_o = open(file, O_RDONLY);

    cr_assert_neq(fd_w, -1, "File open error.");

    ft_putstr_fd(str, fd_w);
    close(fd_w);

    read(fd_o, buf, 9);
    close(fd_o);

    cr_expect_str_eq(buf, "Nevermore", "Output string does not match.");
}
