# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avoronko <avoronko@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/19 15:10:17 by avoronko          #+#    #+#              #
#    Updated: 2023/09/27 14:51:53 by avoronko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLIENT			=	client
SERVER			=	server

CLIENT_SRC		=	client.c
SERVER_SRC		=	server.c

Lib_DIR			=	./src/libft
Lib				=	$(Lib_DIR)/libft.a
Printf_DIR		=	./src/ft_printf
Printf			=	$(Printf_DIR)/printf.a

RM				=	rm -f
CFALGS			=	-Wall -Wextra -Werror -I ./includes

all:
	@$(MAKE) -sC $(Lib_DIR)
	@$(MAKE) -sC $(Printf_DIR)
	@$(MAKE) $(CLIENT)
	@$(MAKE) $(SERVER)

$(CLIENT): $(CLIENT_SRC) $(Lib)
	@$(CC) $(CFLAGS) $(CLIENT_SRC) $(Lib) $(Printf) -o $(CLIENT)

$(SERVER): $(SERVER_SRC) $(Lib) $(Printf)
	@$(CC) $(CFLAGS) $(SERVER_SRC) $(Lib) $(Printf) -o $(SERVER)

clean:
	@$(MAKE) clean -sC $(Lib_DIR)
	@$(MAKE) clean -sC $(Printf_DIR)

fclean:
	@$(MAKE) clean
	@$(RM) $(CLIENT) $(SERVER)

re:
	@$(MAKE) fclean
	@$(MAKE)

.PHONY: all clean flclean 
