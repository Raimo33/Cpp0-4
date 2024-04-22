/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:06:11 by craimond          #+#    #+#             */
/*   Updated: 2024/04/22 15:26:24 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << GREEN "FragTrap constructor called" NC << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
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
