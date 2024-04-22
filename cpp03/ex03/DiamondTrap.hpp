/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:30:11 by craimond          #+#    #+#             */
/*   Updated: 2024/04/22 17:19:48 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(const std::string &name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &copy); //copy constructor
		DiamondTrap &operator=(const DiamondTrap &copy); //copy assignment
		void attack(const std::string &target);
		void whoAmI();
	
	private:
		std::string _name;
		
};

#endif