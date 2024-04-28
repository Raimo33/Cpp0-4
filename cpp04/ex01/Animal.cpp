/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:13:27 by craimond          #+#    #+#             */
/*   Updated: 2024/04/28 15:22:30 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Essere Vivente")
{
	std::cout << GREEN "Animal constructor called" NC << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
        this->_type = other._type;
    return *this;
}

Animal::Animal(const Animal& other)
{
	*this = other;
    std::cout << GREEN "Animal constructor called" NC << std::endl;
}

Animal::~Animal()
{
	std::cout << RED "Animal destructor called" NC << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal makes sound" << std::endl;
}

std::string Animal::getType(void) const
{
	return _type;
}