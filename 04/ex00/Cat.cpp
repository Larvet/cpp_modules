/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:08:12 by locharve          #+#    #+#             */
/*   Updated: 2024/10/25 12:18:37 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::cat(void): Animal("Cat") {
	std::cout << "------- Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& src) {
	*this = src;
	std::cout << "------- Cat copy constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& src) {
	setType(src.getType());
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "------- Cat default destructor called" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "I'm a cat, give me some food or leave me alone" << std::endl;
}