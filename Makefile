NAME=push_swap.a

INCLUDE := include

SRC=

OBJS_DIR = build/
OBJS_DIR2 = build/libft_src
OBJS_DIR3 = build/get_next_line_src
OBJS_DIR4 = build/ft_printf_src
OBJS = $(SRC:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

CFLAGS += -g -Wall -Werror -Wextra -O0

CC = gcc

$(OBJS_DIR)%.o : %.c
	@mkdir -p $(OBJS_DIR)
	@mkdir -p $(OBJS_DIR2)
	@mkdir -p $(OBJS_DIR3)
	@mkdir -p $(OBJS_DIR4)
# @echo "Compiling: $<"
	@$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@


$(NAME) : $(OBJECTS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_PREFIXED)
	@echo "Libft ready!"

all: $(NAME)

clean:
	@rm -rf $(OBJECTS_PREFIXED)
	@echo "Clean!"

fclean: clean
	@rm -rf build
#	@echo "Clean!"

re: fclean all

.PHONY: all clean fclean re