# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: locharve <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/09 18:58:28 by locharve          #+#    #+#              #
#    Updated: 2024/09/09 19:01:34 by locharve         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = out

SRC = tests.cpp Account.cpp
OBJ = $(SRC:.cpp=.o)

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98 -g

all: $(NAME)
$(NAME): $(OBJ)
		$(CC) $(OBJ) -o $(NAME)

clean:
		@rm -rf $(OBJ)

fclean: clean
		@rm -rf $(NAME)

re: clean all

.PHONY: all, clean, fclean, re
