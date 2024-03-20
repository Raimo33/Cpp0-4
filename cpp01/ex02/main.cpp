/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:51:21 by craimond          #+#    #+#             */
/*   Updated: 2024/03/20 15:08:27 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

int	main(void)
{
	std::string		string;
	std::string 	*stringPTR;
	std::string		&stringREF = string;

	string = "HI THIS IS BRAIN";
	stringPTR = &string;

	std::cout << std::left << std::setw(35) << "address of 'str': " << &string << std::endl;
	std::cout << std::setw(35) << "address held by 'stringPTR': " << stringPTR << std::endl;
	std::cout << std::setw(35) << "address of 'stringREF': " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << std::setw(35) << "value of 'str': " << string << std::endl;
	std::cout << std::setw(35) << "value pointed to by 'stringPTR': " << *stringPTR << std::endl;
	std::cout << std::setw(35) << "value pointed to by 'stringREF': " << stringREF << std::endl;
}