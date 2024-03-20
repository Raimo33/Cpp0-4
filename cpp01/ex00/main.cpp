/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:51:21 by craimond          #+#    #+#             */
/*   Updated: 2024/03/20 14:47:54 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	//Pointers to objects on the heap (must be deleted manually)
	Zombie	*heaper = newZombie("Heaper");
	heaper->announce();
	Zombie	*heaper1 = newZombie("Heaper1");
	heaper1->announce();
	Zombie	*heaper2 = newZombie("Heaper2");
	heaper2->announce();
	Zombie	*heaper3 = newZombie("Heaper3");
	heaper3->announce();
	std::cout << std::endl;

	//Objects on the stack (deleted automatically)
	randomChump("Stacker");
	randomChump("Stacker1");
	randomChump("Stacker2");
	randomChump("Stacker3");
	std::cout << std::endl;

	delete heaper;
	delete heaper1;
	delete heaper2;
	delete heaper3;
	return 0;
}