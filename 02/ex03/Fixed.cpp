/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:31:04 by locharve          #+#    #+#             */
/*   Updated: 2024/10/07 06:30:00 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Coplein */

Fixed::Fixed(void) : _nbr(0) {}

Fixed::Fixed(const Fixed & src) {
	*this = src;
}

Fixed::~Fixed(void) {
}

Fixed & Fixed::operator=(const Fixed & src) {
	this->setRawBits(src.getRawBits());
	return (*this);
}

/* new constructors */

Fixed::Fixed(const int n) {
	this->setRawBits(n << _bit_n);
}

Fixed::Fixed(const float f) {
	this->setRawBits(roundf(f * (1 << _bit_n)));
}

/* old member fonctions */

int	Fixed::getRawBits(void) const {
	return (this->_nbr);
}

void	Fixed::setRawBits(int const raw) {
	this->_nbr = raw;
}

/* 01 member fonctions */

float	Fixed::toFloat(void) const {
	int	raw = getRawBits();
	return ((float)(raw) / (float)((1 << _bit_n)));
}

int	Fixed::toInt(void) const {
	return (this->getRawBits() >> _bit_n);
}

/* 01 operator overload */

std::ostream&	operator<<(std::ostream& os, const Fixed& src) {
	os << src.toFloat();
	return (os);
}

/* 02 */

bool	Fixed::operator>(const Fixed& to_cmp) {
	return (this->toFloat() > to_cmp.toFloat());
}

bool	Fixed::operator<(const Fixed& to_cmp) {
	return (this->toFloat() < to_cmp.toFloat());
}

bool	Fixed::operator>=(const Fixed& to_cmp) {
	return (this->toFloat() >= to_cmp.toFloat());
}

bool	Fixed::operator<=(const Fixed& to_cmp) {
	return (this->toFloat() <= to_cmp.toFloat());
}

bool	Fixed::operator==(const Fixed& to_cmp) {
	return (this->toFloat() == to_cmp.toFloat());
}

bool	Fixed::operator!=(const Fixed& to_cmp) {
	return (this->toFloat() != to_cmp.toFloat());
}

/* Arithmetic */

Fixed	Fixed::operator+(const Fixed& to_clc) {
	return (Fixed(this->toFloat() + to_clc.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& to_clc) {
	return (Fixed(this->toFloat() - to_clc.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& to_clc) {
	return (Fixed(this->toFloat() * to_clc.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& to_clc) {
	return (Fixed(this->toFloat() / to_clc.toFloat()));
}

/* Incrementation & decrementation */

Fixed&	Fixed::operator++(void) {
	this->_nbr += 1;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp = *this;
	this->_nbr += 1;
	return (tmp);
}

Fixed&	Fixed::operator--(void) {
	this->_nbr -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp = *this;
	this->_nbr -= 1;
	return (tmp);
}

/* min & max */

Fixed&	Fixed::min(Fixed& a, Fixed& b) {
	return (a < b ? a : b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b) {
	Fixed	tmp_a = a, tmp_b = b;
	return (tmp_a < tmp_b ? a : b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b) {
	return (a > b ? a : b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b) {
	Fixed	tmp_a = a, tmp_b = b;
	return (tmp_a > tmp_b ? a : b);
}
