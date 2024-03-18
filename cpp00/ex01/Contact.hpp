/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:27:46 by craimond          #+#    #+#             */
/*   Updated: 2024/03/19 00:41:48 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class	Contact
{
	public:
		Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
		Contact(void);
		~Contact();
		void		displayInLine();
		void		displayOnNewLines();
		void		setFirstName(std::string firstName);
		void		setLastName(std::string lastName);
		void		setNickName(std::string nickName);
		void		setPhoneNumber(std::string phoneNumber);
		void		setDarkestSecret(std::string darkestSecret);
		void		setIdx(uint8_t idx);
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
		uint8_t		_idx;
};

#endif