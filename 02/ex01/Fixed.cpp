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

Fixed::Fixed(void) : _nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	std::cout << "this nbr = " << (src._nbr >> _bit_n) << std::endl;
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
	this->setRawBits(n << _bit_n);
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	std::cout
		<< "float = " << f << std::endl
		<< "roundf(f) = " << roundf(f) << std::endl
		<< "f * (1 << 8) = " << f / (1 << 8) << std::endl;
	this->setRawBits(f * (1 << _bit_n));
}

/* old member fonctions */

int	Fixed::getRawBits(void) const
{
	return (this->_nbr);
}

void	Fixed::setRawBits(int const raw)
{
	this->_nbr = raw;
}

/* new member fonctions */

float	Fixed::toFloat(void) const
{
	int	raw = getRawBits();
	return ((float)(raw) / (float)((1 << _bit_n)));
}

int	Fixed::toInt(void) const
{
	return (this->getRawBits() >> _bit_n);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& src) {
	os << src.toFloat();
	return (os);
}