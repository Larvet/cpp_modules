/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:43:34 by locharve          #+#    #+#             */
/*   Updated: 2024/11/06 10:53:16 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void): type("AAnimal") {
	std::cout << "------- AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& src) {
	*this = src;
	std::cout << "------- AAnimal copy constructor called" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& src) {
	setType(src.getType());
	return (*this);
}

AAnimal::~AAnimal(void) {
	std::cout << "------- AAnimal default destructor called" << std::endl;
}

void	AAnimal::setType(std::string t) {
	type = t;
}

std::string	AAnimal::getType(void) const {
	return (type);
}

void	AAnimal::makeSound(void) const {
	std::cout << "*unintelligible growling*" << std::endl;
}