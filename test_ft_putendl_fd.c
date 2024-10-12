#include "criterion-2.4.2/include/criterion/criterion.h"
#include "../libft.h"
#include "test.h"

Test(ft_putendl_fd, basic_test) {
    char *file = "outputs/putendl.txt";
    char buf[10];
    char *str = "Nevermore";
    int fd_w = open(file, O_TRUNC | O_WRONLY | O_CREAT, 0664);
    int fd_o = open(file, O_RDONLY);

    cr_assert_neq(fd_w, -1, "File open error.");

    ft_putendl_fd(str, fd_w);

    read(fd_o, buf, 10);

    cr_expect_str_eq(buf, "Nevermore\n", "Output string does not match.");
    close(fd_w);
    close(fd_o);
}
