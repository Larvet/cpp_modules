/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locharve <locharve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:00:30 by locharve          #+#    #+#             */
/*   Updated: 2024/09/28 17:59:19 by locharve         ###   ########.fr       */
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

void init_segment(t_segment &seg, Point const p1, Point const p2)
{
	seg.p1 = p1;
	seg.p2 = p2;
	seg.slope = (seg.p1.getY().toFloat() - seg.p2.getY().toFloat()) / (seg.p1.getX().toFloat() - seg.p2.getX().toFloat());
	// cas particulier : segment vertical. division par zero a eviter
}

void stretch_segment(t_segment &seg, Point &const opposite)
{
	int i = 0; // not i. slope ?

	while (seg.p1.getX().getRawBits() + i < opposite.getX().getRawBits() && seg.p1.getY().getRawBits() + i < opposite.getY().getRawBits() && seg.p2.getX().getRawBits() + i < opposite.getX().getRawBits() && seg.p2.getY().getRawBits() + i < opposite.getY().getRawBits())
		i++; //
}

int	lineEquation(const Point& origin, const Point& limit, Point& p) {
	float	result = ((limit.getY().toFloat() - origin.getY().toFloat())
		/ (limit.getX().toFloat() - origin.getX().toFloat()))
		* p.getX().toFloat() + origin.getY().toFloat();
	if (origin.getY().toFloat() < result) //
		return (-1);
	else if (origin.getY().toFloat() > result)
		return (1);
	else
		return (0);
}

bool	onSameSubplane(t_segment seg, Point opposite, Point point) {
	Fixed	minX = (minX.min(seg.p1.getX(), seg.p2.getX()));
	// recopy constructors ?
	const Point	origin = minX == seg.p1.getX() ? seg.p1 : seg.p2;
	const Point	limit = minX == seg.p1.getX() ? seg.p2 : seg.p1;

	return (lineEquation(origin, limit, opposite)
		== lineEquation(origin, limit, point));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	t_segment ab, bc, ca;

	init_segment(ab, a, b);
	init_segment(bc, b, c);
	init_segment(ca, c, a);

	return (onSameSubplane(ab, c, point)
		&& onSameSubplane(bc, a, point)
		&& onSameSubplane(ca, b, point));
}
