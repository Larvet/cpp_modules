/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:31:04 by locharve          #+#    #+#             */
/*   Updated: 2024/09/26 14:12:57 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Coplein */

Fixed::Fixed(void) : nbr(0)
{
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & src)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
//	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed & src)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(src.getRawBits());
	return (*this);
}

/* new constructors */

Fixed::Fixed(const int n)
{
	this->setRawBits(n << bit_nbr);
}

Fixed::Fixed(const float f)
{
	this->nbr = roundf(f * (1 << bit_nbr));
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

/* 01 member fonctions */

float	Fixed::toFloat(void) const
{
	int	raw = getRawBits();
	return ((float)(raw) / (float)((1 << bit_nbr)));
}

int	Fixed::toInt(void) const
{
	return (this->getRawBits() >> bit_nbr);
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
	this->nbr += 1;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp = *this;
	this->nbr += 1;
	return (tmp);
}

Fixed&	Fixed::operator--(void) {
	this->nbr -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp = *this;
	this->nbr -= 1;
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
