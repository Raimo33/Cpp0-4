/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:31:04 by craimond          #+#    #+#             */
/*   Updated: 2024/03/21 14:03:41 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static uint8_t	get_level_index(std::string level);

Harl::Harl()
{
	_complaints[0] = &Harl::debug;
	_complaints[1] = &Harl::info;
	_complaints[2] = &Harl::warning;
	_complaints[3] = &Harl::error;
	_silenced_levels[0] = false;
	_silenced_levels[1] = false;
	_silenced_levels[2] = false;
	_silenced_levels[3] = false;
}

Harl::~Harl() {}

void Harl::complain(std::string level)
{
	uint8_t		idx;

	idx = get_level_index(level);
	if (_silenced_levels[idx] == false)
		(this->*_complaints[idx])();
}

void	Harl::silence(std::string level)
{
	uint8_t		level_index;

	level_index = get_level_index(level);
	switch (level_index)
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

static uint8_t	get_level_index(std::string level)
{
	uint8_t				level_index;
	const std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	uint8_t				level_count = sizeof(levels) / sizeof(levels[0]);

	level_index = 0;
	while (level_index < level_count)
	{
		if (level == levels[level_index])
			break;
		level_index++;
	}
	return (level_index);
}