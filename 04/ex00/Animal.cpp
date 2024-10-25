/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:43:34 by locharve          #+#    #+#             */
/*   Updated: 2024/10/25 12:01:00 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("Animal") {
	std::cout << "------- Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& src) {
	*this = src;
	std::cout << "------- Animal copy constructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& src) {
	setType(src.getType());
	return (*this);
}

Animal::~Animal(void) {
	std::cout << "------- Animal default destructor called" << std::endl;
}

void	Animal::setType(std::string t) {
	type = t;
}

std::string	getType(void) const {
	return (type);
}

void	Animal::makeSound(void) const {
	std::cout << "*unintelligible growling*" << std::endl;
}