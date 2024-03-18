/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:27:35 by craimond          #+#    #+#             */
/*   Updated: 2024/03/19 00:41:30 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <stdint.h>
# include <iomanip>
# include "Contact.hpp"

# define MAX_CONTACTS 8

# define BLUE "\033[0;34m"
# define ORANGE "\033[0;33m"
# define NC "\033[0m"

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