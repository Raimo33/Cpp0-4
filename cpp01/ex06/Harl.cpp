/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:31:04 by craimond          #+#    #+#             */
/*   Updated: 2024/03/20 23:19:45 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	_complaints[0] = &Harl::debug;
	_complaints[1] = &Harl::info;
	_complaints[2] = &Harl::warning;
	_complaints[3] = &Harl::error;
	_levels["DEBUG"] = 0;
	_levels["INFO"] = 1;
	_levels["WARNING"] = 2;
	_levels["ERROR"] = 3;
	_silenced_levels[0] = false;
	_silenced_levels[1] = false;
	_silenced_levels[2] = false;
	_silenced_levels[3] = false;
}

Harl::~Harl() {}

void Harl::complain(std::string level)
{
	if (_silenced_levels[_levels[level]] == false)
		(this->*_complaints[_levels[level]])();
}

void	Harl::silence(std::string level)
{
	switch (_levels[level])
	{
		case 3:
			_silenced_levels[2] = true;
		case 2:
			_silenced_levels[1] = true;
		case 1:
			_silenced_levels[0] = true;
		default:
			break;
	}
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