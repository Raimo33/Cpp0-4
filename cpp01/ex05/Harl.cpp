/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:31:04 by craimond          #+#    #+#             */
/*   Updated: 2024/03/20 21:44:11 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::complain(std::string level)
{
	const std::string 	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*const	complaints[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (uint8_t i = 0; i < 4; i++)
	{
		if (level == levels[i])
			(this->*complaints[i])();
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