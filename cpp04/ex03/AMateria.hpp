/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:01:01 by craimond          #+#    #+#             */
/*   Updated: 2024/04/22 19:02:22 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define BLUE "\033[34m"
#define NC "\033[0m"

class AMateria
{
	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & other);
		AMateria & operator=(AMateria const & other);
		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	protected:
		std::string _type;
};

#endif