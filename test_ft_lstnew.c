#include "criterion-2.4.2/include/criterion/criterion.h"
#include "../libft.h"

Test(ft_lstnew, new_list_element) {
    t_list *lst = ft_lstnew(ft_strdup("Nevermore"));

    cr_assert_str_eq(lst->content, "Nevermore", "Expected 'Nevermore' as content.");
    cr_assert_null(lst->next, "Expected next to be NULL.");
}
