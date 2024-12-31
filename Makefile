NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror $(INCLUDES)# -g3 -fsanitize=address,leak,undefined

RM = rm -f

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC = ./push_swap.c ./src/algorithm.c ./src/checkdata.c ./src/content.c ./src/parse.c ./src/printer.c ./src/push.c ./src/revrotate.c ./src/rotate.c ./src/sortshort.c ./src/swap.c ./src/utils.c
OBJ = $(SRC:.c=.o)

INCLUDES = -I./includes -I$(LIBFT_DIR)/includes

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR) --no-print-directory

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make -C $(LIBFT_DIR) fclean --no-print-directory
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
