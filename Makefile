CC=cc
CC_FLAGS= -Wall -Wextra -Werror
LIB=testft.a
INC_DIR=.
HEADER_FILE=testft.h
SRCS=show.c test_ft_isalpha.c test_ft_isdigit.c test_ft_isalnum.c test_ft_isascii.c test_ft_isprint.c test_ft_strlen.c test_ft_memset.c \
		test_ft_bzero.c test_ft_memcpy.c test_ft_memmove.c test_ft_strlcpy.c test_ft_strlcat.c test_ft_toupper.c test_ft_tolower.c test_ft_strchr.c \
		test_ft_strrchr.c test_ft_strncmp.c test_ft_memchr.c test_ft_memcmp.c test_ft_strnstr.c test_ft_atoi.c test_ft_strdup.c test_ft_calloc.c \
		test_ft_substr.c test_ft_strjoin.c test_ft_strtrim.c test_ft_split.c test_ft_itoa.c test_ft_strmapi.c test_ft_striteri.c test_ft_putchar_fd.c \
		test_ft_putstr_fd.c test_ft_putendl_fd.c test_ft_putnbr_fd.c 
BONUS_SRCS=test_ft_lstnew.c test_ft_lstadd_front.c test_ft_lstsize.c test_ft_lstlast.c test_ft_lstadd_back.c test_ft_lstdelone.c test_ft_lstclear.c \
		test_ft_lstiter.c test_ft_lstmap.c del_node_content.c add_node.c add_lst_node.c iter_lst_show.c test_del.c
OBJS=$(SRCS:.c=.o)
BONUS_OBJS=$(BONUS_SRCS:.c=.o)

all: $(LIB)

$(LIB): $(OBJS)
	@echo "ar rcs $(LIB) $(OBJS)"
	@ar rcs $@ $^

bonus: $(BONUS_OBJS)
	@echo "ar rcs $(LIB) $(BONUS_OBJS)"
	@ar rcs $(LIB) $(BONUS_OBJS)

%.o: %.c $(HEADER_FILE)
	@echo "$(CC) $(CC_FLAGS) -c $< -I $(INC_DIR) -o $@"
	@$(CC) $(CC_FLAGS) -c $< -I $(INC_DIR) -o $@

clean:
	@echo "removing $(OBJS) $(BONUS_OBJS)"
	@rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	@echo "Removing $(LIB)"
	@rm -f $(LIB)

re: fclean all

.PHONY: all clean fclean re
