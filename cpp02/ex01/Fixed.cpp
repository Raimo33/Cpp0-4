/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:01:20 by craimond          #+#    #+#             */
/*   Updated: 2024/03/21 19:25:50 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _value(0)
{
	std::cout << GREEN "Default constructor called" NC << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << GREEN "Copy constructor called" NC << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << RED "Destructor called" NC << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << this->_fractionalBits;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_value = copy.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}