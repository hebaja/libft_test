#include "../libft.h"
#include "test.h"

void	test_ft_lstdelone()
{
	int	result;
	int	output;
	int	size;
	char	*str;
	t_list	*l1;
	str = (char *)malloc(sizeof(char) * 10);
	ft_strlcpy(str, "Nevermore", 10);
	printf(">>> FT_LSTDELONE: ");
	result = 1;
	size = 0;
	l1 = ft_lstnew(str);
	output = ft_strncmp(l1->content, "Nevermore", 9);
	if (output) // If true, strings are different
		result = 0;
	ft_lstdelone(l1, free_node_content);
	output = l1 == NULL; //*l1 must be null after del
	if (output)
		result = 0;
	show(result);
}
