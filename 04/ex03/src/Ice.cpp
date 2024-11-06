/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:45:03 by locharve          #+#    #+#             */
/*   Updated: 2024/11/06 11:54:05 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
	std::cout << "------- Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& src): AMateria() {
	*this = src;
	std::cout << "------- Ice copy constructor called" << std::endl;
}

Ice&	Ice::operator=(const Ice& src) {
	setType(src.getType());
	return (*this);
}

Ice::~Ice() {
	std::cout << "------- Ice destructor called" << std::endl;
}
/*
AMateria*	clone() const {

}
*/