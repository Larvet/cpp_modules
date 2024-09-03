# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: locharve <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 13:21:05 by locharve          #+#    #+#              #
#    Updated: 2024/09/03 13:30:05 by locharve         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

HEADERS = ./Contact.hpp ./PhoneBook.hpp

all: $(NAME)
$(NAME): $(OBJ)
		$(CC) $(OBJ) $(HEADERS) -o $(NAME)

clean:
		@rm -rf $(OBJ)

fclean: clean
		@rm -rf $(NAME)

re: clean all

.PHONY: all, clean, fclean, re
