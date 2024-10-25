/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:24:36 by locharve          #+#    #+#             */
/*   Updated: 2024/10/25 12:39:16 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("WrongAnimal") {
	std::cout << "------- WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) {
	*this = src;
	std::cout << "------- WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& src) {
	setType(src.getType());
	return (*this);
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "------- WrongAnimal default constructor called" << std::endl;
}

void	makeSound(void) const {
	std::cout << "Trust me, I'm a REAL animal" << std::endl;
}

void	setType()