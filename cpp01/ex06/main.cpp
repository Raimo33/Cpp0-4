/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:39:21 by craimond          #+#    #+#             */
/*   Updated: 2024/03/21 12:51:57 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static uint8_t	check_args(int argc, char **argv, const std::string levels[4])
{
	if (argc != 2) {
		std::cout << "wrong number of arguments" << std::endl; return 1;
	} if (!levels->find(argv[1])) {
		std::cout << "invalid level" << std::endl; return 1;
	}
	return 0;
}

int		main(int argc, char **argv)
{
	Harl				harl;
	const std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	const uint8_t		levels_count = sizeof(levels) / sizeof(levels[0]);

	if (check_args(argc, argv, levels) == 1)
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