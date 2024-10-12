#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"

Test(ft_lstsize, size_of_list) {
    t_list *lst = ft_lstnew(ft_strdup("Nevermore"));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Dream Theater")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Cripper")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Thin Lizzy")));

    cr_assert_eq(ft_lstsize(lst), 4, "Expected list size of 4.");
}
