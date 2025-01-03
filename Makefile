NAME = push_swap
NAME_BONUS = checker

CC = cc
CFLAGS = -Wall -Wextra -Werror $(INCLUDES) -g3 -fsanitize=address,leak,undefined

RM = rm -f

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC = ./push_swap.c ./src/algorithm.c ./src/checkdata.c ./src/content.c ./src/parse.c ./src/printer.c ./src/push.c ./src/revrotate.c ./src/rotate.c ./src/sortshort.c ./src/swap.c ./src/utils.c
OBJ = $(SRC:.c=.o)

SRC_BONUS = ./checker_bonus.c ./src_bonus/checkargs_bonus.c ./src_bonus/checkerinput_bonus.c ./src_bonus/parseargs_bonus.c ./src_bonus/push_bonus.c ./src_bonus/revrotate_bonus.c ./src_bonus/rotate_bonus.c ./src_bonus/swap_bonus.c
OBJ_BONUS = $(SRC_BONUS:.c=.o)

INCLUDES = -I./includes -I$(LIBFT_DIR)/includes

all: $(NAME)

bonus: $(NAME_BONUS)

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(NAME_BONUS): $(LIBFT) $(OBJ_BONUS)
	$(CC) $(CFLAGS) $(OBJ_BONUS) $(LIBFT) -o $(NAME_BONUS)

$(LIBFT):
	make -C $(LIBFT_DIR) --no-print-directory

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make -C $(LIBFT_DIR) fclean --no-print-directory
	$(RM) $(OBJ) $(OBJ_BONUS)
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME_BONUS)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
