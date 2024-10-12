#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"

Test(ft_lstdelone, delete_one_node) {
    t_list *lst = ft_lstnew(ft_strdup("Nevermore"));
	cr_assert_not_null(lst);
	ft_lstdelone(lst, free);
}
