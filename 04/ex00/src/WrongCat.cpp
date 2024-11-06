/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:13:59 by locharve          #+#    #+#             */
/*   Updated: 2024/11/05 12:37:21 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
	type = "WrongCat";
	std::cout << "------- WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) {
	*this = src;
	std::cout << "------- WrongCat copy constructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& src) {
	setType(src.getType());
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "------- WrongCat destructor called" << std::endl;
}