/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:17:29 by craimond          #+#    #+#             */
/*   Updated: 2024/04/28 15:21:52 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << GREEN "WrongCat constructor called" NC << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
	std::cout << GREEN "WrongCat constructor called" NC << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << RED "WrongCat destructor called" NC << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "MUUUUUU SONO UNA MUCCA CAZZO" << std::endl;
}
