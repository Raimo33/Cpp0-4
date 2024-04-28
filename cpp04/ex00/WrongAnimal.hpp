/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:14:47 by craimond          #+#    #+#             */
/*   Updated: 2024/04/28 15:19:19 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define BLUE "\033[34m"
#define NC "\033[0m"

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		virtual ~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &copy);
		std::string getType() const;
		void makeSound() const;
	protected:
		std::string _type;
};

#endif