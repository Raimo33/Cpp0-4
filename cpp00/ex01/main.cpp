/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:33:29 by craimond          #+#    #+#             */
/*   Updated: 2024/03/19 00:47:34 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//TODO testare con ctrl+d

static void			addContact(PhoneBook& phoneBook);
static void			searchContact(PhoneBook& phoneBook);
static std::string	optionsStrInit(const std::string* options);

int	main(void)
{
	PhoneBook			phoneBook;
	std::string			input;
	const std::string 	options[3] = {"ADD", "SEARCH", "EXIT"};
	void (*const 		actions[3])(PhoneBook&) = {addContact, searchContact, NULL};
	const uint8_t		inputCount = sizeof(options) / sizeof(options[0]);
	const std::string	optionsStr = optionsStrInit(options);

	std::cout << BLUE "Welcome to the phonebook!" NC << std::endl;
	while (1)
	{		
		std::cout << BLUE "What would you like to do? " << optionsStr << ": " NC;
		std::getline(std::cin, input);
		if (!std::cin.good())
			return (std::cout << BLUE "Goodbye!" NC << std::endl, 0);
		for (uint8_t i = 0; i < inputCount; i++)
		{
			if (input == "EXIT")
				return (std::cout << BLUE "Goodbye!" NC << std::endl, 0);
			if (input == options[i])
			{
				actions[i](phoneBook);
				break ;
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
	if (contactCount == 0)
	{
		std::cout << ORANGE "No contacts to display" NC << std::endl;
		return ;
	}
	std::cout <<  BLUE "Enter the index of the contact you would like to see: " NC;
	std::getline(std::cin, input);
	if (!std::cin.good())
		return ;
	try
	{
		idx = ft_stoi(input);
	}
	catch (std::invalid_argument& e)
	{
		std::cout << ORANGE "Invalid index" NC << std::endl;
		return ;
	}
	if (idx < contactCount)
		phoneBook.getContact(idx).displayOnNewLines();
	else
		std::cout << ORANGE "Invalid index" NC << std::endl;
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
		std::getline(std::cin, input);
		if (!std::cin.good())
			return ;
		(newContact.*setters[i])(input);
	}
	phoneBook.addContact(newContact);
}

std::string	optionsStrInit(const std::string* options)
{
	std::string		optionsStr;
	const uint8_t	optionsCount = options->length();
	
	for (uint8_t i = 0; i < optionsCount - 1; i++)
		optionsStr += options[i] + '/';
	optionsStr += options[optionsCount - 1];
	return optionsStr;
}
