/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:08:44 by locharve          #+#    #+#             */
/*   Updated: 2024/09/30 17:17:55 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void) {
	Fixed	ax(-3), ay(4),
		bx(8), by(0),
		cx(2), cy(5);
	Point	a(ax, ay),
		b(bx, by),
		c(cx, cy);
	
	Fixed	p1x(-2), p1y(3),
		p2x(1), p2y(1),
		p3x(0), p3y(4);
	Point	p1(p1x, p1y),
		p2(p2x, p2y),
		p3(p3x, p3y);

	std::cout << "main: " << std::endl
		<< "ax = " << ax << " ay = " << ay << std::endl
		<< "a = " << a << std::endl
		<< std::endl;

	std::cout
		<< "A(-3, 4) ; B(8, 0) ; C(2, 5)" << std::endl
		<< "P1(-2, 3) : " << std::endl;
	if (bsp(a, b, c, p1))
		std::cout << "in triangle" << std::endl;
	else
		std::cout << "out of triangle" << std::endl
			<< std::endl;
	
	std::cout << "P2(1, 1) : " << std::endl;
		if (bsp(a, b, c, p2))
			std::cout << "in triangle" << std::endl;
		else
			std::cout << "out of triangle" << std::endl
				<< std::endl;

	std::cout << "P3(0, 4) : " << std::endl;
		if (bsp(a, b, c, p3))
			std::cout << "in triangle" << std::endl;
		else
			std::cout << "out of triangle" << std::endl
				<< std::endl;

	return (0);
}