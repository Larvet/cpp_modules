/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:00:30 by locharve          #+#    #+#             */
/*   Updated: 2024/09/30 16:32:16 by locharve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//// reset les coordonnes de facon a ce qu'elles soient toutes positives ?

// faire les segments

// calculer leur pente

// les etirer jusqu'a ce qu'une des extremités ait la meme ordonnée
//     ou la même abscisse que le sommet opposé

// le point est il du meme coté de la droite que le sommet opposé ?
//     si oui : continuer a tester les autres cotés du triangle
//     si non : stop. le point n'est pas dans le triangle

// ...

s_segment::s_segment(const Point& pt1, const Point&pt2): p1(pt1), p2(pt2) {}
/*
static void init_segment(t_segment &seg, Point const p1, Point const p2)
{
	seg.p1 = p1;
	seg.p2 = p2;
//	seg.slope = (seg.p1.getY().toFloat() - seg.p2.getY().toFloat()) / (seg.p1.getX().toFloat() - seg.p2.getX().toFloat());
	// cas particulier : segment vertical. division par zero a eviter
}
*/

// y = ax + b
// a = coef directeur 

static int	lineEquation(const Point& origin, const Point& limit, const Point& p) {
	Fixed	lx(limit.getX().toFloat() - origin.getX().toFloat()),
			ly(limit.getY().toFloat() - origin.getY().toFloat()),
			px(p.getX().toFloat() - origin.getX().toFloat()),
			py(p.getY().toFloat() - origin.getY().toFloat());
	Point	newLimit(lx, ly),
			newPoint(px, py);
/*
	Point	newLimit(limit.getX() - origin.getX(),
				limit.getY() - origin.getY()),
			newPoint(p.getX() - origin.getX(),
				p.getY() - origin.getY());
*/

	std::cout << "lineEquation:" << std::endl 
		<< "origin: " << origin << std::endl
		<< "limit: " << limit << std::endl
		<< "p: " << p << std::endl << std::endl;

	float	lineEq = (newLimit.getY().toFloat() / newLimit.getX().toFloat())
				* newPoint.getX().toFloat();
	std::cout
		<< "lineEq = " << lineEq << std::endl
		<< "py = " << newPoint.getY().toFloat() << std::endl;
	if (newPoint.getY().toFloat() < lineEq)
		return (-1);
	else if (newPoint.getY().toFloat() > lineEq)
		return (1);
	else
		return (0);
/*
	float	result = ((limit.getY().toFloat() - origin.getY().toFloat())
		/ (limit.getX().toFloat() - origin.getX().toFloat()))
		* p.getX().toFloat() + origin.getY().toFloat();
	if (origin.getY().toFloat() < result) //
		return (-1);
	else if (origin.getY().toFloat() > result)
		return (1);
	else
		return (0);
*/
}

static bool	onSameSubplane(t_segment& seg, const Point& opposite, const Point& point) {

	std::cout << "onSameSubPlane: " << std::endl
		<< "opposite: " << opposite << std::endl
		<< "point: " << point << std::endl << std::endl;

	Fixed	minX = (minX.min(seg.p1.getX(), seg.p2.getX()));
	// recopy constructors ?
	const Point	origin = minX == seg.p1.getX() ? seg.p1 : seg.p2;
	const Point	limit = minX == seg.p1.getX() ? seg.p2 : seg.p1;
	int	lineEqOp = lineEquation(origin, limit, opposite),
		lineEqPt = lineEquation(origin, limit, point);
	return (lineEqOp && lineEqPt && lineEqOp == lineEqPt);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
//	t_segment ab(a, b), bc(b, c), ca(c, a);

	std::cout << "bsp: " << std::endl
		<< "a: " << a << std::endl
		<< "b: " << b << std::endl
		<< "c: " << c << std::endl << std::endl;
//	init_segment(ab, a, b);
//	init_segment(bc, b, c);
//	init_segment(ca, c, a);

	return (true);
/*	return (onSameSubplane(ab, c, point)
		&& onSameSubplane(bc, a, point)
		&& onSameSubplane(ca, b, point));
*/
}
