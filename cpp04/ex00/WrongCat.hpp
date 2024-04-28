/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:17:01 by craimond          #+#    #+#             */
/*   Updated: 2024/04/28 15:19:24 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define BLUE "\033[34m"
#define NC "\033[0m"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &copy);
		virtual ~WrongCat();
		WrongCat &operator=(const WrongCat &copy);
		void makeSound() const;
};

#endif