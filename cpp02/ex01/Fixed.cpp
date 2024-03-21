/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:01:20 by craimond          #+#    #+#             */
/*   Updated: 2024/03/21 22:04:15 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
	std::cout << GREEN "Int constructor called" NC << std::endl;
	this->_value = value << this->_fractionalBits;
}

Fixed::Fixed(const float value)
{
	std::cout << GREEN "Float constructor called" NC << std::endl;
	this->_value = roundf(value * (1 << this->_fractionalBits));
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_value = copy.getRawBits();
	return *this;
}

float Fixed::toFloat(void) const
{
	return (float)this->_value / (1 << this->_fractionalBits);
}

int Fixed::toInt(void) const
{
	return this->_value >> this->_fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
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