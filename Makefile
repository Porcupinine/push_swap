NAME = push_swap
LIBFT_PATH = printflibft
LIBFT_LIB = $(LIBFT_PATH)/libft.a

INCLUDE := include

SRC= main.c stack/print_stack.c stack/swap.c \
turk/turk_push_b.c stack/create_stack.c stack/check_stack.c \
stack/search_stack.c turk/turk_search.c turk/turk_check_moves.c stack/push.c \
stack/rotate.c stack/reverse_rotate.c turk/sort_back.c stack/I_want_to_break_free.c

OBJS_DIR = build/
OBJS_DIR2 = build/turk
OBJS_DIR3 = build/stack

OBJS = $(SRC:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

CC = gcc
CFLAGS += -g -O0 -Wall -Wextra -Werror -fsanitize=address -fsanitize=undefined -D_GLIBCXX_DEBUG -static-libasan -I$(LIBFT_PATH)/include
LDFLAGS = -L$(LIBFT_PATH) -lft

$(OBJS_DIR)%.o : %.c
	@mkdir -p $(OBJS_DIR)
	@mkdir -p $(OBJS_DIR2)
	@mkdir -p $(OBJS_DIR3)
	@$(CC) $(LDFLAGS) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS_PREFIXED)
	@$(MAKE) -C $(LIBFT_PATH)
	@$(CC) $(LDFLAGS) $(CFLAGS) $(OBJECTS_PREFIXED) $(LIBFT_LIB) -o $(NAME)
	@echo "Push_swap is ready!"

clean:
	@rm -f $(OBJECTS_PREFIXED)
	@echo "Clean!"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re