/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:28:07 by craimond          #+#    #+#             */
/*   Updated: 2024/03/18 17:33:14 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	strPad(std::string str, uint8_t width)
{
	std::string		newStr;
	const uint8_t	len = str.length();

	newStr.reserve(width);
	newStr = str;
	for (uint8_t i = len; i < width; i++)
		newStr += ' ';
	return newStr;
}

std::string	strTrunc(std::string str, uint8_t width)
{
	std::string		newStr;

	if (str.length() <= width)
		newStr = str;
	else
		newStr = str.substr(0, width - 1) + '.';
	return newStr;
}

std::string ft_itos(uint8_t i)
{
    std::string	s;
	char		digit;

	s.reserve(3);
    if (i == 0)
		return "0";    
    while (i > 0)
	{
        digit = '0' + (i % 10);
        s += digit;
        i /= 10;
    }
    return s;
}

int32_t	ft_stoi(std::string s)
{
	int32_t		i;
	uint8_t		j;
	uint8_t		len;

	i = 0;
	j = 0;
	len = s.length();
	while (j < len)
	{
		if (s[j] < '0' || s[j] > '9')
			throw std::invalid_argument("stoi");
		i = i * 10 + (s[j] - '0');
		j++;
	}
	return i;
}