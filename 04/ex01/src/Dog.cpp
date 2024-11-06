/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:58:15 by locharve          #+#    #+#             */
/*   Updated: 2024/11/06 10:13:31 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal() {
	type = "Dog";
	brain = new Brain();
	std::cout << "------- Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& src) {
	*this = src;
	std::cout << "------- Dog copy constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& src) {
	setType(src.getType());
	*brain = Brain(*(src.getBrain()));
	return (*this);
}

Dog::~Dog(void) {
	delete brain;
	std::cout << "------- Dog default constructor called" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "I'M A DOG GIVE ME YOUR ATTENTION" << std::endl;
}

Brain*	Dog::getBrain() const {
	return (brain);
}