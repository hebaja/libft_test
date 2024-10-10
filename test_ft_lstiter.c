#include "../libft.h"
#include "test.h"
#include <stdio.h>

void	test_ft_lstiter()
{
	int	result;
	int	output;
	int	bytes = -1;
	int	i = 0;
	char	*file = "output.txt";
	char	strs[4][14] = { "Dream Theater\0", "Thin Lizzy\0", "Cripper\0", "Nevermore\0" };
	int	sizes[4] = {ft_strlen(strs[0]), ft_strlen(strs[1]), ft_strlen(strs[2]), ft_strlen(strs[3]) };
	int     fd_o = open(file, O_RDONLY);
	char	buf[sizes[0]];
	printf(">>> FT_LSTITER: ");
	t_list	*lst = ft_lstnew(strs[3]);
	result = 1;
	add_lst_node(&lst, strs[2]);
	add_lst_node(&lst, strs[1]);
	add_lst_node(&lst, strs[0]);
	remove(file);
	ft_lstiter(lst, iter_lst_fd); //writes iteration to file output.txt
	bytes = read(fd_o, buf, sizes[i++]);
	buf[sizes[0]] = 0;
	while(bytes)
	{
		output = ft_strncmp(buf, strs[i - 1], ft_strlen(buf)); //checks if what was written in output.txt matches
		if (output) // if true, string are different
			result = 0;
		bytes = read(fd_o, buf, sizes[i++]);
		buf[bytes] = '\0';
	}
	show(result);
	close(fd_o);
}
