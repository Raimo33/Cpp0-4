/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:27:35 by craimond          #+#    #+#             */
/*   Updated: 2024/03/17 21:39:36 by craimond         ###   ########.fr       */
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
		void addContact();
		void searchContact();

	private:
		Contact		contacts[MAX_CONTACTS];
		uint8_t		contactCount;
};

#endif