NAME		= rush-02

SRC		= ./main.c \
		  ./ft_dict_read.c \
		  ./ft_funcs.c \
		  ./ft_funcs2.c \
		  ./ft_split.c \
		  ./ft_nb_block.c \

OBJ		= $(SRC:.c=.o)

CFLAGS		+= -Wall -Wextra -Werror

$(NAME):	$(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(SRC)

all:		$(NAME)

clean:		
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
