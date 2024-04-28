/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:16:41 by craimond          #+#    #+#             */
/*   Updated: 2024/04/28 15:21:33 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Essere Vivente")
{
	std::cout << GREEN "WrongAnimal constructor called" NC << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	std::cout << GREEN "WrongAnimal constructor called" NC << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED "WrongAnimal destructor called" NC << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongWrongAnimal makes sound" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return _type;
}