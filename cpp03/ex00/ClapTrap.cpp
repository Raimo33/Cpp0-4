/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:15:00 by craimond          #+#    #+#             */
/*   Updated: 2024/04/22 17:17:57 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Unnamed"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << GREEN << _name << " has spawned" NC << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << GREEN << _name << " has spawned" NC << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	_name = copy._name;
	_hit_points = copy._hit_points;
	_energy_points = copy._energy_points;
	_attack_damage = copy._attack_damage;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << GREEN << _name << " has spawned" NC << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << _name << " has been destroyed" NC << std::endl;
}

void	ClapTrap::takeDamage(uint16_t amount)
{
	if (_hit_points <= amount)
	{
		std::cout << _name << " has surrendered!" << std::endl;
		return ;
	}
	_hit_points -= amount;
	std::cout << _name << " takes " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_attack_damage == 0)
	{
		std::cout << _name << " has no attack damage!" << std::endl;
		return ;
	}
	if (_energy_points < 1)
	{
		std::cout << _name << " has no energy points!" << std::endl;
		return ;
	}
	_energy_points--;
	std::cout << _name << " attacks " << target << " causing " << _attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(uint16_t amount)
{
	if (_energy_points <= amount)
	{
		std::cout << _name << " has no energy points!" << std::endl;
		return ;
	}
	_energy_points -= 1;
	_hit_points += amount;
	std::cout << _name << " repairs himself for " << amount << " points!" << std::endl;
}

