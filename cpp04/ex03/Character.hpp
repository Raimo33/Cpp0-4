/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:30:31 by craimond          #+#    #+#             */
/*   Updated: 2024/04/26 13:43:30 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <iostream>
# include <stdint.h>

# define MAX_FLOOR_SIZE 50

class Character : public ICharacter
{
	public:
		Character();
		Character(const std::string &name);
		Character(const Character &other);
		Character &operator=(const Character &other);
		~Character();
		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
	private:
		std::string	_name;
		AMateria	*_inventory[4];
		AMateria	*_floor[50];
		uint8_t		_floor_size;
		
};

#endif