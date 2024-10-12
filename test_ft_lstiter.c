#include "../libft.h"
#include "criterion-2.4.2/include/criterion/criterion.h"
#include "test.h"

char	str_matrix[4][14] = { "Dream Theater\0", "Thin Lizzy\0", "Cripper\0", "Nevermore\0" };

void	del_nothing() {}

void	_iter_lst_fd(void *cont)
{
	char    *file = "output.txt";
    int fd_w = open(file, O_APPEND | O_WRONLY | O_CREAT, 0644);
	ft_putstr_fd(cont, fd_w);
	close(fd_w);
}


void	test_ft_lstiter(t_list *lst, const char *file)
{
	int	fd_o;
	char	buf[15];
	int	bytes;
	int	i = 0;
	int	output;
	int	result = 1;
	int	sizes[4] = { ft_strlen(str_matrix[0]), ft_strlen(str_matrix[1]), ft_strlen(str_matrix[2]), ft_strlen(str_matrix[3]) };

	// Remove file if it exists to simulate fresh start
	remove(file);

	// Apply ft_lstiter
	ft_lstiter(lst, _iter_lst_fd);

	// Open the output file for reading
	fd_o = open(file, O_RDONLY);
	cr_assert(fd_o != -1, "Failed to open file for reading.");

	// Read and verify the contents
	bytes = read(fd_o, buf, sizes[i]);
	buf[bytes] = '\0';
	while (bytes > 0)
	{
		output = ft_strncmp(buf, str_matrix[i], bytes);
		if (output != 0)  // Strings are different
			result = 0;
		i++;
		bytes = read(fd_o, buf, sizes[i]);
		buf[bytes] = '\0';
	}

	cr_expect(result == 1, "List iteration did not write the expected strings to the file.");

	close(fd_o);
}

Test(ft_lstiter, list_iteration_file_output)
{
	// Create the linked list
	t_list	*lst = ft_lstnew(str_matrix[3]);
	ft_lstadd_front(&lst, ft_lstnew(str_matrix[2]));
	ft_lstadd_front(&lst, ft_lstnew(str_matrix[1]));
	ft_lstadd_front(&lst, ft_lstnew(str_matrix[0]));

	// Test ft_lstiter writing to the file
	test_ft_lstiter(lst, "output.txt");

	// Clean up memory
	ft_lstclear(&lst, del_nothing);
}
