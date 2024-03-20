/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:12:27 by craimond          #+#    #+#             */
/*   Updated: 2024/03/20 16:13:03 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sed.h"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return 1;
	}
	ft_sed(argv[1], argv[2], argv[3]);
	return 0;
}