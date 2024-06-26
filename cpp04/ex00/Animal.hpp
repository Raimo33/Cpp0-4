/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:13:29 by craimond          #+#    #+#             */
/*   Updated: 2024/04/22 18:14:28 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# define GREEN "\033[32m"
# define RED "\033[31m"
# define BLUE "\033[34m"
# define NC "\033[0m"

class Animal
{
	public:
		Animal();
		Animal(const Animal& other); //copy constructor
		Animal &operator=(const Animal& other); //copy assignment operator
		virtual ~Animal();
		virtual void makeSound(void) const; //const: non modifica le member variables della classe su cui 'e chiamata
		std::string getType(void) const;
	protected:
		std::string _type;
};

#endif