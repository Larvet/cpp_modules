# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: locharve <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/02 13:06:28 by locharve          #+#    #+#              #
#    Updated: 2024/09/03 13:22:47 by locharve         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)
$(NAME): $(OBJ)
		$(CC) $(OBJ) -o $(NAME)

clean:
		@rm -rf $(OBJ)

fclean: clean
		@rm -rf $(NAME)

re: clean all

.PHONY: all, clean, fclean, re
