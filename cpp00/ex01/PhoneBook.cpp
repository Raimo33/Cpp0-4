/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:25:31 by craimond          #+#    #+#             */
/*   Updated: 2024/03/18 23:43:28 by craimond         ###   ########.fr       */
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
		if (this->contactCount == MAX_CONTACTS)
			std::cout << ORANGE "Phonebook is full: new contacts will replace old ones" NC << std::endl;
	}
	else
		this->contacts[this->contactCount - 1] = contact;
}

Contact	PhoneBook::getContact(const uint8_t idx)
{
	return this->contacts[idx];
}

uint8_t	PhoneBook::getContactCount() const
{
	return this->contactCount;
}
