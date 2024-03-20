/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:11:10 by craimond          #+#    #+#             */
/*   Updated: 2024/03/20 15:25:17 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

# define ORANGE "\033[33m"
# define NC "\033[0m"

class	Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		std::string const &getType() const;
		void setType(std::string type);
	private:
		std::string	_type;
};

#endif