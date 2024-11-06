/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:24:36 by locharve          #+#    #+#             */
/*   Updated: 2024/11/05 12:39:05 by locharve         ###   ########.fr       */
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

void	WrongAnimal::makeSound(void) const {
	std::cout << "Trust me, I'm a REAL animal" << std::endl;
}

void	WrongAnimal::setType(std::string t) {
	type = t;
}

std::string	WrongAnimal::getType() const {
	return (type);
}