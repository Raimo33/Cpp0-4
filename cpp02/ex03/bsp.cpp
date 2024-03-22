/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:20:43 by craimond          #+#    #+#             */
/*   Updated: 2024/03/22 12:29:09 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const p)
{
	Fixed denom, w1, w2, w3;

	Fixed byay = b.getY() - a.getY();
	Fixed bxax = b.getX() - a.getX();
	Fixed cxax = c.getX() - a.getX();
	Fixed cyay = c.getY() - a.getY();
	Fixed pxcx = p.getX() - c.getX();
	Fixed pycy = p.getY() - c.getY();
	Fixed bxcx = b.getX() - c.getX();

    denom = (byay * cxax) - (bxax * cyay);
    w1 = (byay * (pxcx) - (bxcx) * (pycy)) / denom;
	w2 = (cyay * (pxcx) - cxax * (pycy));
	w2 = w2 * -1 / denom;

	return (w1 >= 0 && w2 >= 0 && (w1 + w2) <= 1);
}
