/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:20:43 by craimond          #+#    #+#             */
/*   Updated: 2024/03/22 18:26:04 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

static float area (const Point p1, const Point p2, const Point p3);

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	float	d0, d1, d2, d3;
	bool	ret_val = false;

	d0 = area(a, b, c);
	d1 = area(point, a, b);
	d2 = area(point, b, c);
	d3 = area(point, a, c);

	if ( d1 == 0 || d2 == 0 || d3 == 0)
		ret_val = false;
	else if ( d1 + d2 + d3 == d0 )
		ret_val = true;
	return (ret_val);
}

static float area (const Point p1, const Point p2, const Point p3)
{
	float	area;

	area =	(
			( p1.getX().toFloat() * ( p2.getY().toFloat() - p3.getY().toFloat() ) )
			+ ( p2.getX().toFloat() * ( p3.getY().toFloat() - p1.getY().toFloat() ) )
			+ ( p3.getX().toFloat() * ( p1.getY().toFloat() - p2.getY().toFloat() ) )
			)
			/ 2;

	return (area >= 0 ? area : -area);
}

// bool	bsp(const Point a, const Point b, const Point c, const Point p)
// {
// 	double Ax, Ay, Bx, By, Cx, Cy, Px, Py;
// 	double s1, s2, s3, s4;
// 	double w1, w2, w3;

// 	Ax = a.getX().toFloat();
// 	Ay = a.getY().toFloat();
// 	Bx = b.getX().toFloat();
// 	By = b.getY().toFloat();
// 	Cx = c.getX().toFloat();
// 	Cy = c.getY().toFloat();
// 	Px = p.getX().toFloat();
// 	Py = p.getY().toFloat();

//     s1 = Cy - Ay;
//     s2 = Cx - Ax;
//     s3 = By - Ay;
//     s4 = Py - Ay;

//     w1 = (Ax * s1 + s4 * s2 - Px * s1) / (s3 * s2 - (Bx - Ax) * s1);
//     w2 = (s4 - w1 * s3) / s1;
// 	w3 = 1 - w1 - w2;

//     return (w1 > 0 && w2 > 0 && w3 > 0);
// }
