NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror $(INCLUDES)# -g3 -fsanitize=address,leak,undefined

AR = ar rcs

RM = rm -f

INCLUDES = -I includes

SRC_DIR = src
SRC = \
	$(SRC_DIR)/ft_isalpha.c	\
	$(SRC_DIR)/ft_isdigit.c	\
	$(SRC_DIR)/ft_isalnum.c	\
	$(SRC_DIR)/ft_isascii.c	\
	$(SRC_DIR)/ft_isprint.c	\
	$(SRC_DIR)/ft_isspace.c	\
	$(SRC_DIR)/ft_tolower.c	\
	$(SRC_DIR)/ft_toupper.c	\
	$(SRC_DIR)/ft_strlen.c	\
	$(SRC_DIR)/ft_strchr.c	\
	$(SRC_DIR)/ft_strrchr.c	\
	$(SRC_DIR)/ft_strcmp.c	\
	$(SRC_DIR)/ft_strncmp.c	\
	$(SRC_DIR)/ft_memset.c	\
	$(SRC_DIR)/ft_bzero.c	\
	$(SRC_DIR)/ft_memcpy.c	\
	$(SRC_DIR)/ft_memmove.c	\
	$(SRC_DIR)/ft_memchr.c	\
	$(SRC_DIR)/ft_memcmp.c	\
	$(SRC_DIR)/ft_strlcpy.c	\
	$(SRC_DIR)/ft_strlcat.c	\
	$(SRC_DIR)/ft_strnstr.c	\
	$(SRC_DIR)/ft_atoi.c	\
	$(SRC_DIR)/ft_atoll.c	\
	$(SRC_DIR)/ft_sqrt.c	\
	$(SRC_DIR)/ft_indexof.c	\
	$(SRC_DIR)/ft_quicksort.c	\
	$(SRC_DIR)/ft_insertionsort.c	\
	$(SRC_DIR)/ft_tosorted.c	\
	$(SRC_DIR)/ft_calloc.c	\
	$(SRC_DIR)/ft_strdup.c	\
	$(SRC_DIR)/ft_substr.c	\
	$(SRC_DIR)/ft_strjoin.c	\
	$(SRC_DIR)/ft_strtrim.c	\
	$(SRC_DIR)/ft_split.c	\
	$(SRC_DIR)/ft_itoa.c	\
	$(SRC_DIR)/ft_strmapi.c	\
	$(SRC_DIR)/ft_striteri.c	\
	$(SRC_DIR)/ft_lstnew.c	\
	$(SRC_DIR)/ft_lstadd_front.c	\
	$(SRC_DIR)/ft_lstsize.c	\
	$(SRC_DIR)/ft_lstlast.c	\
	$(SRC_DIR)/ft_lstadd_back.c	\
	$(SRC_DIR)/ft_lstdelone.c	\
	$(SRC_DIR)/ft_lstclear.c	\
	$(SRC_DIR)/ft_lstiter.c	\
	$(SRC_DIR)/ft_lstmap.c	\
	$(SRC_DIR)/ft_dlstnew.c	\
	$(SRC_DIR)/ft_dlstadd_front.c	\
	$(SRC_DIR)/ft_dlstsize.c	\
	$(SRC_DIR)/ft_dlstlast.c	\
	$(SRC_DIR)/ft_dlstadd_back.c	\
	$(SRC_DIR)/ft_dlstdelone.c	\
	$(SRC_DIR)/ft_dlstclear.c	\
	$(SRC_DIR)/ft_dlstiter.c	\
	$(SRC_DIR)/ft_dlstmap.c	\
	$(SRC_DIR)/ft_stackinit.c	\
	$(SRC_DIR)/ft_stackpush.c	\
	$(SRC_DIR)/ft_stackpushnew.c	\
	$(SRC_DIR)/ft_stackpop.c	\
	$(SRC_DIR)/ft_stackpopfree.c	\
	$(SRC_DIR)/ft_stackclear.c	\
	$(SRC_DIR)/ft_stackfree.c	\
	$(SRC_DIR)/ft_stackmovetop.c	\
	$(SRC_DIR)/ft_stackrotate.c	\
	$(SRC_DIR)/ft_stackrotaterev.c	\
	$(SRC_DIR)/ft_stackswaptop.c	\
	$(SRC_DIR)/ft_free.c	\
	$(SRC_DIR)/ft_freeintmatrix.c	\
	$(SRC_DIR)/ft_freestr.c	\
	$(SRC_DIR)/ft_freestrarr_r.c	\
	$(SRC_DIR)/ft_freestrarr.c	\
	$(SRC_DIR)/ft_freestrmatrix_r.c	\
	$(SRC_DIR)/ft_freestrmatrix.c	\
	$(SRC_DIR)/ft_close.c	\
	$(SRC_DIR)/ft_putchar_fd.c	\
	$(SRC_DIR)/ft_putstr_fd.c	\
	$(SRC_DIR)/ft_putendl_fd.c	\
	$(SRC_DIR)/ft_putnbr_fd.c	\
	$(SRC_DIR)/ft_putnbrhex_fd.c	\
	$(SRC_DIR)/ft_putnbru_fd.c	\
	$(SRC_DIR)/ft_putptr_fd.c	\
	$(SRC_DIR)/get_next_line.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
