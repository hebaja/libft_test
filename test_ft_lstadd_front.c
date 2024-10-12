#include "criterion-2.4.2/include/criterion/criterion.h"
#include "../libft.h"

Test(ft_lstadd_front, list_add_front) {
    t_list *lst = ft_lstnew(ft_strdup("Nevermore"));
    ft_lstadd_front(&lst, ft_lstnew(ft_strdup("Dream Theater")));
    ft_lstadd_front(&lst, ft_lstnew(ft_strdup("Cripper")));

    cr_assert_str_eq(lst->content, "Cripper", "Expected 'Cripper' at the front.");
    cr_assert_eq(ft_lstsize(lst), 3, "Expected list size of 3.");
}
