/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:31:04 by craimond          #+#    #+#             */
/*   Updated: 2024/03/20 22:10:06 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::complain(std::string level)
{
	std::map<std::string, void (Harl::*)(void)>	complaints;
	std::map<std::string, bool>					silenced_levels;

	complaints["DEBUG"] = &Harl::debug;
	complaints["INFO"] = &Harl::info;
	complaints["WARNING"] = &Harl::warning;
	complaints["ERROR"] = &Harl::error;
	silenced_levels[this->_silenced_level] = true;
	switch (silenced_levels[level])
	{
		case true:
			return ;
		case false:
			(this->*complaints[level])();
	}
}

void	Harl::silence(std::string level)
{
	_silenced_level = level;
}

void	Harl::debug(void)
{
	std::cout << ORANGE "DEBUG" NC ": This is a debug message" << std::endl;
}

void	Harl::info(void)
{
	std::cout << CYAN "INFO" NC ": This is an info message" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << PURPLE "WARNING" NC ": This is a warning message" << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED "ERROR" NC ": This is an error message" << std::endl;
}