/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:00:30 by locharve          #+#    #+#             */
/*   Updated: 2024/10/07 06:30:29 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

s_segment::s_segment(const Point& pt1, const Point&pt2): p1(pt1), p2(pt2) {}

static int	lineEquation(const Point& origin, const Point& limit, const Point& p) {
	Fixed	lx (limit.getX().toFloat() - origin.getX().toFloat()),
			ly (limit.getY().toFloat() - origin.getY().toFloat()),
			px (p.getX().toFloat() - origin.getX().toFloat()),
			py (p.getY().toFloat() - origin.getY().toFloat());
	Point	newLimit (lx, ly),
			newPoint (px, py);
	float	lineEq = (newLimit.getY().toFloat() / newLimit.getX().toFloat())
				* newPoint.getX().toFloat();

	if (newPoint.getY().toFloat() < lineEq)
		return (-1);
	else if (newPoint.getY().toFloat() > lineEq)
		return (1);
	else
		return (0);
}

static bool	onSameSubplane(t_segment& seg, const Point& opposite, const Point& point) {
	Fixed	minX = (minX.min(seg.p1.getX(), seg.p2.getX()));
	const Point	origin = minX == seg.p1.getX() ? seg.p1 : seg.p2;
	const Point	limit = minX == seg.p1.getX() ? seg.p2 : seg.p1;
	int	lineEqOp = lineEquation(origin, limit, opposite),
		lineEqPt = lineEquation(origin, limit, point);
	return (lineEqOp && lineEqPt && lineEqOp == lineEqPt);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	t_segment ab(a, b), bc(b, c), ca(c, a);

	return (onSameSubplane(ab, c, point)
		&& onSameSubplane(bc, a, point)
		&& onSameSubplane(ca, b, point));
}
