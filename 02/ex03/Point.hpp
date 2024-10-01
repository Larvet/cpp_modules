/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:39:16 by locharve          #+#    #+#             */
/*   Updated: 2024/09/30 17:10:09 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
	private:
		const Fixed	_x;
		const Fixed	_y;
	public:
		Point(void);
		Point(const Fixed x, const Fixed y);
		Point(const Point& src);
		~Point(void);

		const Fixed&	getX(void) const;
		const Fixed&	getY(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Point& src);

struct s_segment {
	const Point&	p1;
	const Point&	p2;

	s_segment(const Point & pt1, const Point & pt2);
};

typedef struct s_segment	t_segment;

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif