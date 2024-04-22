/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:32:36 by craimond          #+#    #+#             */
/*   Updated: 2024/04/22 18:20:48 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "dog";
	std::cout << GREEN "Dog constructor called" NC << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		_brain = new Brain();
	}
	return *this;
}

Dog::Dog(const Dog &other)
{
	*this = other;
	std::cout << "Animal constructor called" << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << RED "Dog destructor called" NC << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "bau" << std::endl;
}