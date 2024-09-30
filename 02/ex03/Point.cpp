/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:42:19 by locharve          #+#    #+#             */
/*   Updated: 2024/09/30 17:19:20 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): _x(0), _y(0) {}

Point::Point(const Fixed x, const Fixed y): _x(x), _y(y) {}

Point::Point(const Point& src) {
	std::cout << "Point copy constructor called" << std::endl;
	*this = Point(src.getX(), src.getY());
	std::cout << "this = " << *this << std::endl;
}
/*
Point&	Point::operator=(const Point& src) {
//	const Point	newP(src.getX(), src.getY());
//	delete this;
	*this = src;
//	*this = Point(src.getX(), src.getY());
	return (*this);
}
*/
Point::~Point(void) {
	std::cout << "Point destructor called" << std::endl;
}

const Fixed&	Point::getX(void) const {
	return (this->_x);
}

const Fixed&	Point::getY(void) const {
	return (this->_y);
}

std::ostream&	operator<<(std::ostream& os, const Point& src) {
	os << '(' << src.getX().toFloat() << ',' << src.getY().toFloat() << ')';
	return (os);
}