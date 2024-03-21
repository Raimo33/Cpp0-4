/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:39:21 by craimond          #+#    #+#             */
/*   Updated: 2024/03/21 13:55:06 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static uint8_t	check_args(int argc, char **argv, const std::string levels[], const uint8_t levels_count)
{
	uint8_t			i;

	if (argc != 2) {
		std::cout << "wrong number of arguments" << std::endl; return 1;
	}
	i = 0;
	while (i < levels_count)
		if (argv[1] == levels[i++])
			return 0;
	return 1;
}

int		main(int argc, char **argv)
{
	Harl				harl;
	const std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	const uint8_t		levels_count = sizeof(levels) / sizeof(levels[0]);

	if (check_args(argc, argv, levels, levels_count) == 1)
		return (1);
	harl.silence(argv[1]);
	{
		uint8_t		level_index = 0;
		//generate a random tests in range ("DEBUG", "ERROR") for N_TESTS times
		for (int i = 0; i < N_TESTS; i++) {
			level_index = rand() % (levels_count);
			harl.complain(levels[level_index]);
		}
	}
	return (0);
}