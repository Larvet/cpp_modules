/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:58:15 by locharve          #+#    #+#             */
/*   Updated: 2024/10/25 12:07:55 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog") {
	std::cout << "------- Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& src) {
	*this = src;
	std::cout << "------- Dog copy constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& src) {
	setType(src.getType());
	return (*this);
}

Dog::~Dog(void) {
	std::cout << "------- Dog default constructor called" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "I'M A DOG GIVE ME YOUR ATTENTION" << std::endl;
}