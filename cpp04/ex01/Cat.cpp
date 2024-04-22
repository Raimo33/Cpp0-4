/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:19:56 by craimond          #+#    #+#             */
/*   Updated: 2024/04/22 18:20:59 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "cat";
	_brain = new Brain();
	std::cout << GREEN "Cat constructor called" NC << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		_type = other._type;
		_brain = new Brain();
	}
	return *this;
}

Cat::Cat(const Cat &other)
{
	*this = other;
	std::cout << "Animal constructor called" << std::endl;
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
