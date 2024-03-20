/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:55:24 by craimond          #+#    #+#             */
/*   Updated: 2024/03/20 14:50:03 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(string name) : _name(name) {}
Zombie::Zombie() : _name("Unnamed") {}

Zombie::~Zombie()
{
	std::cout << this->_name << RED ": DyiiiiiinnnnngggG..." NC << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << GREEN ": BraiiiiiiinnnzzzZ..." NC << std::endl;
}

void	Zombie::setName(string name)
{
	this->_name = name;
}