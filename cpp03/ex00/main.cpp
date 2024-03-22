/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:34:04 by craimond          #+#    #+#             */
/*   Updated: 2024/03/22 14:44:38 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap unnamed;
	ClapTrap bob("Useless Bob");
	ClapTrap bob_cpy(bob);
	ClapTrap bob_cpy2 = bob;

	unnamed.attack("Majestic Jack");
	unnamed.beRepaired(5);
	unnamed.attack("Majestic Jack");
	bob.beRepaired(1);
	bob.attack("Majestic Jack");
	bob.takeDamage(5);
	bob_cpy2.takeDamage(10);
	return 0;
}