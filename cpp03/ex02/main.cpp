/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:34:04 by craimond          #+#    #+#             */
/*   Updated: 2024/04/22 15:27:42 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap fragghio;
	FragTrap fraggy("Fraggy");
	FragTrap unlucky_frag("Unlucky");

	fragghio.attack("Unlucky");
	for (int i = 0; i < 10; i++)
		unlucky_frag.takeDamage(9);
	fraggy.beRepaired(35);
	fraggy.attack("Unlucky");
	fraggy.HighFiveGuys();
	fraggy.beRepaired(42);
	return 0;
}