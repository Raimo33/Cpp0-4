/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:25:31 by craimond          #+#    #+#             */
/*   Updated: 2024/03/18 17:56:29 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->contactCount = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContact(Contact& contact)
{
	if (this->contactCount < MAX_CONTACTS)
	{
		contact.setIdx(this->contactCount);
		this->contacts[this->contactCount] = contact;
		this->contactCount++;
	}
	else
	{
		std::cout << "Phonebook is full: replacing the last contact" << std::endl;
		this->contacts[this->contactCount - 1] = contact;
	}
}

Contact	PhoneBook::getContact(const uint8_t idx)
{
	return this->contacts[idx];
}

uint8_t	PhoneBook::getContactCount() const
{
	return this->contactCount;
}
