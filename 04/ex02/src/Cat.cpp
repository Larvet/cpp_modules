/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:08:12 by locharve          #+#    #+#             */
/*   Updated: 2024/11/06 11:00:58 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): AAnimal() {
	type = "Cat";
	brain = new Brain();
	std::cout << "------- Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& src) {
	*this = src;
	std::cout << "------- Cat copy constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& src) {
	setType(src.getType());
	*brain = Brain(*(src.getBrain()));
	return (*this);
}

Cat::~Cat(void) {
	delete brain;
	std::cout << "------- Cat default destructor called" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "I'm a cat, give me some food or leave me alone" << std::endl;
}

Brain*	Cat::getBrain() const {
	return (brain);
}