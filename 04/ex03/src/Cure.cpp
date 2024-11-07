/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 08:58:18 by locharve          #+#    #+#             */
/*   Updated: 2024/11/07 10:25:56 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
	std::cout << "------- Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure& src): AMateria(src.getType()) {
	std::cout << "------- Cure copy constructor called" << std::endl;
}

Cure&	Cure::operator=(const Cure& src) {
	setType(src.getType());
	return (*this);
}

Cure::~Cure() {
	std::cout << "======= Cure destructor called" << std::endl;
}

AMateria*	Cure::clone() const {
	return (new Cure);
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName()
		<< "'s wounds *" << std::endl;
}
