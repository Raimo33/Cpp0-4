/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:23:32 by craimond          #+#    #+#             */
/*   Updated: 2024/03/20 15:37:14 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(&weapon) {}

HumanA::~HumanA() {}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " ORANGE << this->_weapon->getType() << NC << std::endl;
}