# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: locharve <locharve@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 13:21:05 by locharve          #+#    #+#              #
#    Updated: 2024/09/09 15:33:40 by locharve         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC =	main.cpp \
		PhoneBook.cpp \
		Contact.cpp
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
