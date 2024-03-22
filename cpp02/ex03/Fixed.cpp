/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:01:20 by craimond          #+#    #+#             */
/*   Updated: 2024/03/22 12:09:13 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {}

Fixed::Fixed(const Fixed &copy) : _value(copy._value) {}

Fixed::~Fixed() {}

Fixed::Fixed(const int value)
{
	this->_value = value << this->_fractionalBits;
}

Fixed::Fixed(const float value)
{
	this->_value = roundf(value * (1 << this->_fractionalBits));
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	this->_value = copy.getRawBits();
	return *this;
}

//preincrement
Fixed &Fixed::operator++(void)
{
	this->_value++;
	return *this;
}

//predecrement
Fixed &Fixed::operator--(void)
{
	this->_value--;
	return *this;
}

//postincrement
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

//postdecrement
Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return this->_value == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return this->_value != rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return this->_value >= rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return this->_value <= rhs.getRawBits();
}

bool Fixed::operator>(const Fixed &rhs) const
{
	return this->_value > rhs.getRawBits();
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return this->_value < rhs.getRawBits();
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return a > b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return a < b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return a > b ? a : b;
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
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}