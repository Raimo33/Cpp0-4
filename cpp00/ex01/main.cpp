/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:33:29 by craimond          #+#    #+#             */
/*   Updated: 2024/03/18 18:33:39 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//TODO testare con ctrl+d

static void	addContact(PhoneBook& phoneBook);
static void	searchContact(PhoneBook& phoneBook);

int	main(void)
{
	PhoneBook			phoneBook;
	std::string			input;
	const std::string 	options[2] = {"ADD", "SEARCH"};
	void (*const 		actions[2])(PhoneBook&) = {addContact, searchContact};
	const uint8_t		inputCount = sizeof(options) / sizeof(options[0]);
	const std::string	optionsStr = optionsStrInit(options);

	std::cout << "Welcome to the phonebook!" << std::endl;
	while (1)
	{		
		std::cout << "What would you like to do? options: " << choices << std::endl;
		std::cin >> input;
		if (input == "EXIT")
			return (std::cout << "Goodbye!" << std::endl, 0);
		for (uint8_t i = 0; i < inputCount; i++)
		{
			if (input == options[i])
			{
				actions[i](phoneBook);
				break;
			}
		}
	}
}

static void	searchContact(PhoneBook& phoneBook)
{
	const uint8_t	contactCount = phoneBook.getContactCount();
	std::string		input;
	uint8_t			idx;

	for (uint8_t i = 0; i < contactCount; i++)
		phoneBook.getContact(i).displayInLine();
	std::cout << "Enter the index of the contact you would like to see: ";
	std::cin >> input;
	try
	{
		idx = ft_stoi(input);
	}
	catch (std::invalid_argument& e)
	{
		std::cout << "Invalid index" << std::endl;
	}
	if (idx < contactCount)
		phoneBook.getContact(idx).displayOnNewLines();
	else
		std::cout << "Invalid index" << std::endl;
}

static void	addContact(PhoneBook& phoneBook)
{
	const std::string		prompts[5] = {"First name: ", "Last name: ", "Nickname: ", "Phone number: ", "Darkest secret: "};
	void (Contact::* const	setters[5])(std::string) = {&Contact::setFirstName, &Contact::setLastName, &Contact::setNickName, &Contact::setPhoneNumber, &Contact::setDarkestSecret};
	Contact					newContact;
	std::string				input;
	static const uint8_t	promptCount = sizeof(prompts) / sizeof(prompts[0]);

	for (uint8_t i = 0; i < promptCount; i++)
	{
		std::cout << prompts[i];
		std::cin >> input;
		(newContact.*setters[i])(input);
	}
	phoneBook.addContact(newContact);
}

std::string	optionsStrInit(const std::string* options)
{
	std::string	optionsStr;

	for (uint8_t i = 0; i < sizeof(options) / sizeof(options[0]); i++)
		optionsStr += options[i] + " ";
	return optionsStr;
}
