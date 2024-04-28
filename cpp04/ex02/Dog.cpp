/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:32:36 by craimond          #+#    #+#             */
/*   Updated: 2024/04/28 15:23:28 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _brain(new Brain())
{
	this->_type = "dog";
	std::cout << GREEN "Dog constructor called" NC << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

Dog::Dog(const Dog &other)
{
	*this = other;
	std::cout << GREEN "Dog constructor called" NC << std::endl;
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