# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: locharve <locharve@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 10:38:02 by locharve          #+#    #+#              #
#    Updated: 2024/10/23 07:35:29 by locharve         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = flagtrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FlagTrap.cpp
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


fclean: clean
	@rm -rf $(NAME)

c: all clean

re: clean all

.PHONY: all, clean, fclean, re