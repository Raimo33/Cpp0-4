/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:34:04 by craimond          #+#    #+#             */
/*   Updated: 2024/04/22 16:05:05 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamond("Diamantus");
	DiamondTrap ruby("Rubby");
	
	diamond.attack("Jertups");
	diamond.whoAmI();
	diamond.HighFiveGuys();
	diamond.takeDamage(44);
	diamond.guardGate();
	diamond.attack("Frustus celt");
	for (int i = 0; i < 7; i += 2)
		diamond.HighFiveGuys();
	ruby.whoAmI();
}