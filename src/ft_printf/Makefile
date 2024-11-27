# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 16:53:37 by avoronko          #+#    #+#              #
#    Updated: 2023/07/12 16:54:27 by avoronko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a

SRCS = ft_printf.c ft_printf_utils.c ft_pointer.c

OBJS = ${SRCS:.c=.o}

FLAGS = -Wall -Werror -Wextra

all: ${NAME}

${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}

%.o: %.c
	gcc $(FLAGS) -c $< -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re:	fclean all

.PHONY: all, clean, fclean, re
