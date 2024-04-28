/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:19:56 by craimond          #+#    #+#             */
/*   Updated: 2024/04/28 15:23:19 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), _brain(new Brain())
{
	Animal::_type = "cat";
	std::cout << GREEN "Cat constructor called" NC << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

Cat::Cat(const Cat &other)
{
	*this = other;
	std::cout << GREEN "Cat constructor called" NC << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << RED "Cat destructor called" NC << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "miao" << std::endl;
}
