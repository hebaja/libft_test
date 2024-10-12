#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"

Test(ft_lstclear, list_clear) {
    t_list *lst = ft_lstnew(ft_strdup("Nevermore"));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Cripper")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Thin Lizzy")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Dream Theater")));

    ft_lstclear(&lst, free);

    cr_assert_null(lst, "Expected list to be cleared.");
}
