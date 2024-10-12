#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"

Test(ft_lstadd_back, list_add_back) {
    t_list *lst = ft_lstnew(ft_strdup("Nevermore"));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Dream Theater")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Cripper")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Thin Lizzy")));

    cr_assert_str_eq(ft_lstlast(lst)->content, "Thin Lizzy", "Expected 'Thin Lizzy' at the end.");
    cr_assert_eq(ft_lstsize(lst), 4, "Expected list size of 4.");
}
