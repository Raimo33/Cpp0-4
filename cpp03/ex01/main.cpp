/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:34:04 by craimond          #+#    #+#             */
/*   Updated: 2024/03/22 18:56:27 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("BomboScav");
	ScavTrap scav_cpy(scav);
	ScavTrap unnamed_scav;

	scav.guardGate();
	scav.attack("Majestic Jack");
	scav.takeDamage(5);
	scav.beRepaired(1);
	scav.attack("Majestic Jack");

	return 0;
}