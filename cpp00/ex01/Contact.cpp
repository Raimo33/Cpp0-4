/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:27:22 by craimond          #+#    #+#             */
/*   Updated: 2024/03/19 00:47:52 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickName = nickName;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
	this->_idx = 0;
}

Contact::~Contact()
{
}

Contact::Contact()
{
	this->_firstName = "";
	this->_lastName = "";
	this->_nickName = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
	this->_idx = 0;
}

void Contact::setIdx(uint8_t idx)
{
	this->_idx = idx;
}

void Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}

void Contact::setNickName(std::string nickName)
{
	this->_nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}

void Contact::displayInLine()
{
	static const uint8_t	width = 8;

	std::cout << " | " << strPad(strTrunc(ft_itos(this->_idx), width), width)
			  << " | " << strPad(strTrunc(this->_firstName, width), width)
			  << " | " << strPad(strTrunc(this->_lastName, width), width)
			  << " | " << strPad(strTrunc(this->_nickName, width), width)
			  << " |" << std::endl;
}

void Contact::displayOnNewLines()
{
	std::cout << "First name: " << this->_firstName << std::endl
			  << "Last name: " << this->_lastName << std::endl
			  << "Nickname: " << this->_nickName << std::endl
			  << "Phone number: " << this->_phoneNumber << std::endl
			  << "Darkest secret: " << this->_darkestSecret << std::endl;
}
