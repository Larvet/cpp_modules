/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:01:55 by locharve          #+#    #+#             */
/*   Updated: 2024/09/26 14:15:16 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed	a;
	Fixed	b( 10 );
	Fixed const	c( 42.42f );
	Fixed const	d( b );
	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	std::cout
		<< "a + b = " << a + b << std::endl
		<< "a - c = " << a - c << std::endl
		<< "a * c = " << a * c << std::endl
		<< "a / c = " << a / c << std::endl
		<< std::endl
		<< "++a = " << ++a << std::endl
		<< "a++ = " << a++ << " then: " << c << std::endl
		<< "--b = " << --b << std::endl
		<< "a-- = " << a-- << " then: " << a << std::endl
		<< std::endl
		<< "raw a = " << a.getRawBits() << std::endl
		<< "raw b = " << b.getRawBits() << std::endl
		<< "raw c = " << c.getRawBits() << std::endl
		<< "raw d = " << d.getRawBits() << std::endl
		<< std::endl
		<< "min(a, b) = " << a.min(a.getRawBits(), b.getRawBits()) << std::endl
		<< "const min(c, d) = " << c.min(c.getRawBits(), d.getRawBits()) << std::endl
		<< "max(a, b) = " << a.max(a.getRawBits(), b.getRawBits()) << std::endl
		<< "const max(a, b) = " << a.max(a.getRawBits(), b.getRawBits()) << std::endl;

	return (0);
}
