/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:39:16 by locharve          #+#    #+#             */
/*   Updated: 2024/09/26 17:20:43 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;
		//
	public:
		Point(void);
		Point(const Fixed x, const Fixed y);
		Point(const Fixed& src);
		Point&	operator=(const Point& src);
		~Point(void);
		//
		const Fixed&	getX(void) const;
		const Fixed&	getY(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif