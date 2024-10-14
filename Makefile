CC = cc
CFLAGS = -Wall -Wextra -Werror
CRITERION_DIR = ./criterion-2.4.2
CRITERION_INCLUDE = -I$(CRITERION_DIR)/include
CRITERION_LIB = -L$(CRITERION_DIR)/lib -lcriterion

TESTS = test_ft_bzero.c test_ft_isprint.c  test_ft_memcpy.c test_ft_putstr_fd.c test_ft_strlcpy.c test_ft_strtrim.c test_ft_calloc.c \
		test_ft_itoa.c  test_ft_memmove.c test_ft_split.c test_ft_strlen.c test_ft_substr.c test_ft_isalnum.c test_ft_join.c  \
		test_ft_memset.c test_ft_strchr.c test_ft_strmapi.c test_ft_tolower.c test_ft_isalpha.c test_ft_putchar_fd.c \
		test_ft_strdup.c test_ft_strncmp.c test_ft_toupper.c test_ft_isascii.c test_ft_memchr.c test_ft_putendl_fd.c test_ft_striteri.c \
		test_ft_strnstr.c test_ft_atoi.c test_ft_isdigit.c test_ft_memcmp.c test_ft_putnbr_fd.c test_ft_strlcat.c test_ft_strrchr.c \
		del_node_content.c free_node_content.c iter_lst_fd.c iter_lst_show.c show.c
BONUS_TESTS = test_ft_lstclear.c test_ft_lstadd_back.c test_ft_lstsize.c test_ft_lstadd_front.c test_ft_lstlast.c test_ft_lstnew.c \
				test_ft_lstdelone.c test_ft_lstiter.c test_ft_lstmap.c
LIBRARY = ../libft/libft.a

# Compile all test files with Criterion and your static library
test: $(TESTS) $(LIBRARY)
	mkdir -p outputs
	$(CC) $(CFLAGS) $(CRITERION_INCLUDE) $(TESTS) $(LIBRARY) $(CRITERION_LIB) -o mandatory

bonus: $(BONUS_TESTS) $(LIBRARY)
	mkdir -p outputs
	$(CC) $(CFLAGS) $(CRITERION_INCLUDE) $(BONUS_TESTS) $(LIBRARY) $(CRITERION_LIB) -o bonus

clean:
	rm -f mandatory bonus
