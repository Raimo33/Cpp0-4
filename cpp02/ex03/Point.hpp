/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:17:54 by craimond          #+#    #+#             */
/*   Updated: 2024/03/22 12:22:37 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point();
		~Point();
		Point(const float x, const float y);
		Point(const Point &copy);
		Point &operator=(Point &copy);
		Point operator-(Point &copy);
		Fixed getX(void) const;
		Fixed getY(void) const;
	private:
		const Fixed _x;
		const Fixed _y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const p);

#endif