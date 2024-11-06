/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:33:10 by locharve          #+#    #+#             */
/*   Updated: 2024/11/06 11:53:45 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): _type("") {
	std::cout << "------- AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& src) {
	*this = src;
	std::cout << "------- AMateria copy constructor called" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& src) {
	setType(src.getType());
	return (*this);
}

AMateria::~AMateria() {
	std::cout << "------- AMateria destructor called" << std::endl;
}

AMateria::AMateria(std::string const & type): _type(type) {
	std::cout << "------- AMateria string constructor called" << std::endl;
}

void	AMateria::setType(std::string type) {
	_type = type;
}

std::string const &	AMateria::getType() const {
	return (_type);
}

//void	AMateria::use(ICharacter& target) {} ////