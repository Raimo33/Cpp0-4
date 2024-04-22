/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:13:29 by craimond          #+#    #+#             */
/*   Updated: 2024/04/22 18:58:48 by craimond         ###   ########.fr       */
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
		//VIRTUAL: il metodo PUO' essere ridefinito nelle classi figlie
		//VIRTUAL PURO ( = 0): il metodo DEVE essere ridefinito nelle classi figlie (rendendo quindi la classe astratta) 
		virtual void makeSound(void) const = 0; //const: non modifica le member variables della classe su cui 'e chiamata
		std::string getType(void) const;
	protected:
		std::string _type;
};

#endif