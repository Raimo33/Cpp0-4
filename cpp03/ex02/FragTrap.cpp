/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:06:11 by craimond          #+#    #+#             */
/*   Updated: 2024/04/22 17:22:42 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	ClapTrap::_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << GREEN "FragTrap constructor called" NC << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	ClapTrap::_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << GREEN "FragTrap constructor called" NC << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &copy)
{
	_name = copy._name;
	_hit_points = copy._hit_points;
	_energy_points = copy._energy_points;
	_attack_damage = copy._attack_damage;
	return *this;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
	std::cout << GREEN "FragTrap constructor called" NC << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << RED "FragTrap destructor called" NC << std::endl;
}

void FragTrap::HighFiveGuys(void)
{
	std::cout << "High five request, please follow up accordingly!" << std::endl;
}
