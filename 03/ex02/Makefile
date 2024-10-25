# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: locharve <locharve@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 10:38:02 by locharve          #+#    #+#              #
#    Updated: 2024/10/25 10:33:08 by locharve         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fragtrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ = $(SRC:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -g

%.o: %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

c: all clean

fclean: clean
	@rm -rf $(NAME)

re: clean all

.PHONY: all, clean, fclean, re