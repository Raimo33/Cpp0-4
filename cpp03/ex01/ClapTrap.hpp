/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:10:35 by craimond          #+#    #+#             */
/*   Updated: 2024/04/22 17:13:41 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <stdint.h>

# define GREEN "\033[32m"
# define RED "\033[31m"
# define NC "\033[0m"

class ClapTrap
{
	public:
		ClapTrap(); //default constructor
		ClapTrap(const std::string &name); //custom constructor 
		ClapTrap(const ClapTrap &copy); //copy constructor
		ClapTrap &operator=(const ClapTrap &copy); //copy assignment
		virtual ~ClapTrap(); //destructor
		virtual void attack(const std::string &target);
		void takeDamage(uint16_t amount);
		void beRepaired(uint16_t amount);
	protected:
		std::string	_name;
		uint16_t	_hit_points;
		uint16_t	_energy_points;
		uint16_t	_attack_damage;
};

#endif