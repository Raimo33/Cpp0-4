/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:42:36 by craimond          #+#    #+#             */
/*   Updated: 2024/03/22 18:53:17 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << GREEN "ScavTrap constructor called" NC << std::endl;
}
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << GREEN "ScavTrap constructor called" NC << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
	std::cout << GREEN "ScavTrap constructor called" NC << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy)
{
	_name = copy._name;
	_hit_points = copy._hit_points;
	_energy_points = copy._energy_points;
	_attack_damage = copy._attack_damage;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED "ScavTrap destructor called" NC << std::endl;
}

void	ScavTrap::guardGate()
{
	if (_energy_points == 0)
	{
		std::cout << _name << " has no energy points!" << std::endl;
		return ;
	}
	_energy_points--;
	std::cout << _name << " has entered in Gate keeper mode" << std::endl;
}


