/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:27:35 by craimond          #+#    #+#             */
/*   Updated: 2024/03/18 17:32:59 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(Contact& contact);
		Contact	getContact(const uint8_t idx);
		uint8_t	getContactCount() const;
	private:
		Contact		contacts[MAX_CONTACTS];
		uint8_t		contactCount;
};

std::string	ft_itos(uint8_t i);
int32_t		ft_stoi(std::string str);
std::string	strPad(std::string str, uint8_t width);
std::string	strTrunc(std::string str, uint8_t width);

#endif