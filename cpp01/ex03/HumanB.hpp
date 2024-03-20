/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:19:05 by craimond          #+#    #+#             */
/*   Updated: 2024/03/20 15:21:37 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	public:
		explicit HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon &weapon);
		void attack(void);
	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif