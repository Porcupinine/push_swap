NAME = push_swap
LIBFT_PATH = printflibft
LIBFT_LIB = $(LIBFT_PATH)/libft.a
BONUS_NAME = checker

INCLUDE := include

SRC= main.c stack/print_stack.c stack/swap.c \
turk/turk_push_b.c stack/create_stack.c stack/check_stack.c \
stack/search_stack.c turk/turk_search.c turk/turk_check_moves.c stack/push.c \
stack/rotate.c stack/reverse_rotate.c turk/sort_back.c \
stack/I_want_to_break_free.c turk/move_cases.c turk/push_cases.c

BONUS_SRC= bonus/checker.c

OBJS_DIR = build/
OBJS_DIR2 = build/turk
OBJS_DIR3 = build/stack
OBJS_DIR_BONUS = build/bonus

OBJS = $(SRC:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

OBJS_BONUS = $(BONUS_SRC:.c=.o)
OBJECTS_PREFIXED_BONUS = $(addprefix $(OBJS_DIR_BONUS), $(OBJS_BONUS))

CC = gcc
CFLAGS += -g -O0 -Wall -Wextra -Werror -fsanitize=address -fsanitize=undefined -D_GLIBCXX_DEBUG -static-libasan -I$(LIBFT_PATH)/include
LDFLAGS = -L$(LIBFT_PATH) -lft

$(OBJS_DIR)%.o : %.c
	@mkdir -p $(OBJS_DIR)
	@mkdir -p $(OBJS_DIR2)
	@mkdir -p $(OBJS_DIR3)
	@$(CC) $(LDFLAGS) $(CFLAGS) -c $< -o $@

$(OBJS_DIR_BONUS)%.o : %.c
	@mkdir -p $(OBJS_DIR_BONUS)
	@$(CC) $(LDFLAGS) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS_PREFIXED)
	@$(MAKE) -C $(LIBFT_PATH)
	@$(CC) $(LDFLAGS) $(CFLAGS) $(OBJECTS_PREFIXED) $(LIBFT_LIB) -o $(NAME)
	@echo "Push_swap is ready!"

$(BONUS_NAME): $(OBJECTS_PREFIXED_BONUS) $(NAME)
	@$(CC) $(LDFLAGS) $(CFLAGS) $(OBJECTS_PREFIXED_BONUS) $(LIBFT_LIB) -o $(BONUS_NAME)
	@echo "checker is ready!"

all: $(NAME)

bonus: $(BONUS_NAME)

clean:
	@rm -f $(OBJECTS_PREFIXED)
	@rm -f $(OBJECTS_PREFIXED_BONUS)
	@echo "Clean!"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re