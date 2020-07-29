# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: memartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/18 19:33:49 by memartin          #+#    #+#              #
#    Updated: 2019/06/20 22:43:15 by memartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: re, clean, fclean, all

CC= gcc

CFLAGS= -Wall -Wextra -Werror

NAME= do-op

HEADER = includes

SRC_FILE= srcs/do_op.c\
		  srcs/fonctions.c\

OBJ= $(SRC_FILE:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) -o $(NAME) $(OBJ)
	@echo "DONE"

%.o: %.c
	@$(CC) -c $(CFLAGS) -I $(HEADER) $< -o $@

clean:
	@rm -f $(OBJ)
	
fclean: clean
	@rm -f $(NAME)

re: fclean all
