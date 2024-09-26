/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:31:04 by locharve          #+#    #+#             */
/*   Updated: 2024/09/25 15:37:25 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Coplein */

Fixed::Fixed(void) : nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	std::cout << "this nbr = " << (src.nbr >> bit_nbr) << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed & src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(src.getRawBits());
	return (*this);
}

/* new constructors */

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	//
	this->setRawBits(n << bit_nbr);
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	std::cout
		<< "float = " << f << std::endl
		<< "roundf(f) = " << roundf(f) << std::endl
		<< "f * (1 << 8) = " << f / (1 << 8) << std::endl;
	this->nbr = f * (1 << bit_nbr);
	//
	
}

/* old member fonctions */

int	Fixed::getRawBits(void) const
{
	return (this->nbr);
}

void	Fixed::setRawBits(int const raw)
{
	this->nbr = raw;
}

/* new member fonctions */

float	Fixed::toFloat(void) const
{
	int	raw = getRawBits();
	return ((float)(raw) / (float)((1 << bit_nbr)));
}

int	Fixed::toInt(void) const
{
	return (this->getRawBits() >> bit_nbr);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& src) {
	os << src.toFloat();
	return (os);
}