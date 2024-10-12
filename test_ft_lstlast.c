#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"

Test(ft_lstlast, last_element_in_list) {
    t_list *lst = ft_lstnew(ft_strdup("Thin Lizzy"));
    ft_lstadd_front(&lst, ft_lstnew(ft_strdup("Nevermore")));
    ft_lstadd_front(&lst, ft_lstnew(ft_strdup("Dream Theater")));
    ft_lstadd_front(&lst, ft_lstnew(ft_strdup("Cripper")));

    cr_assert_str_eq(ft_lstlast(lst)->content, "Thin Lizzy", "Expected 'Thin Lizzy' as the last element.");
}
