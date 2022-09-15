NAME		= rush-02

SRC		= ./main.c \
		  ./ft_putchar.c \
		  ./ft_putstr.c \

OBJ		= $(SRC:.c=.o)

CFLAGS		+= -Wall -Wextra -Werror

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(SRC)

all:		$(NAME)

clean:		
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
