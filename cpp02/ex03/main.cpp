/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:47:41 by craimond          #+#    #+#             */
/*   Updated: 2024/03/22 18:08:33 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static void print_state(const bool is_inside, const Point &p);

int main(void)
{
	Point	points[4] = {
		Point(0, 0),
		Point(1, 0),
		Point(0, 1),
		Point(0.8, 0.1),
	};

	Point	triangle[3] = {
		Point(1, 0),
		Point(0, 1),
		Point(0, 0)
	};

	for (int i = 0; i < 4; i++)
	{
		bool is_inside = bsp(triangle[0], triangle[1], triangle[2], points[i]);
		print_state(is_inside, points[i]);
	}
	return 0;
}

static void print_state(const bool is_inside, const Point &p)
{
	std::cout << "Point (" << p.getX() << ", " << p.getY() << ") is ";
	if (is_inside)
		std::cout << GREEN "inside" NC << std::endl;
	else
		std::cout << RED "outside" NC << std::endl;
}
