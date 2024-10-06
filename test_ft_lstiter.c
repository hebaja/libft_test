#include "../libft.h"
#include "test.h"
#include <stdio.h>

void	test_ft_lstiter()
{
	char	*file = "output.txt";
	int	result;
	int	output;
	char	*str1 = ft_strdup("Nevermore");
	char	*str2 = ft_strdup("Cripper");
	char	*str3 = ft_strdup("Thin Lizzy");
	char	*str4 = ft_strdup("Dream Theater");
	char	check[4][14] = { "Dream Theater\0", "Thin Lizzy\0", "Cripper\0", "Nevermore\0" };
	int	sizes[4] = {ft_strlen(str4), ft_strlen(str3), ft_strlen(str2), ft_strlen(str1) };
	// char	*ptr;
	t_list	*lst = ft_lstnew(str1);
	printf(">>> FT_LSTITER: ");
	result = 1;
	add_lst_node(&lst, str2);
	add_lst_node(&lst, str3);
	add_lst_node(&lst, str4);
	remove(file);
	ft_lstiter(lst, iter_lst_fd);
	int     fd_o = open(file, O_RDONLY);
	char	buf[sizes[0]];
	int	bytes = -1;
	int i = 0;
	bytes = read(fd_o, buf, sizes[i++]);
	buf[sizes[0]] = 0;
	while(bytes)
	{
		output = ft_strncmp(buf, check[i - 1], ft_strlen(buf));
		if (output)
			result = 0;
		bytes = read(fd_o, buf, sizes[i++]);
		buf[bytes] = '\0';//put a null at the end of read bytes so it doesn't print leftovers
	}
	show(result);
	close(fd_o);
}
