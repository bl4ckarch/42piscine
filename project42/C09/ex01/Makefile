# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/06 01:29:21 by evgwanul          #+#    #+#              #
#    Updated: 2022/09/07 17:38:44 by evgwanul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS	=	${SRCS:.c=.o}
HEADER = includes

CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror

.c.o:
	${CC}	${CFLAGS}	-I	${HEADER}	-c	$<	-o	${<:.c=.o} 

all:	${NAME}

$(NAME):	${OBJS}
	ar	rc	${NAME}	${OBJS}

clean:
	rm -f	${OBJS}

fclean:	clean
	rm -f $(NAME)

re:	fclean all
