/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:33:56 by craimond          #+#    #+#             */
/*   Updated: 2024/03/17 21:36:37 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	strToUpper(std::string str)
{
	std::string upperStr;

	for (std::string::size_type i = 0; i < str.length(); i++){
        upperStr += static_cast<char>(toupper(str[i]));
    }
    return upperStr;
}

int main(int argc, char **argv)
{
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; i++){
		std::cout << strToUpper(argv[i]) << " ";
	}
	std::cout << std::endl;
}