/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:50:27 by craimond          #+#    #+#             */
/*   Updated: 2024/03/20 16:29:57 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sed.h"

std::string replaceString(std::string line, const std::string& oldstr, const std::string& newstr)
{
	const size_t oldstr_len = oldstr.length();
	const size_t newstr_len = newstr.length();

    size_t pos = 0;
	pos = line.find(oldstr, pos); //find ritorna npos se arriva alla fine (se non trova la stringa)
    while (pos != std::string::npos)
	{
        line.erase(pos, oldstr_len);
        line.insert(pos, newstr);
		pos = line.find(oldstr, pos + newstr_len);
    }
    return line;
}

void	ft_sed(std::string filename, std::string s1, std::string s2)
{
	std::string 		line;
	std::ifstream		infile;
	std::ofstream		outfile;
	const std::string	new_filename = filename + ".replace";

	infile.open(filename.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error: could not open file" << filename << std::endl;
		return ;
	}
	outfile.open(new_filename.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error: could not create file" << new_filename << std::endl;
		infile.close();
		return ;
	}
	while (std::getline(infile, line))
		outfile << replaceString(line, s1, s2) << std::endl;
	infile.close();
	outfile.close();
}