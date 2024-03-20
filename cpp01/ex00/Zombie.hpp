/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:51:30 by craimond          #+#    #+#             */
/*   Updated: 2024/03/20 14:43:20 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

# define RED "\033[31m"
# define GREEN "\033[32m"
# define NC "\033[0m"

typedef std::string string;

class Zombie
{
	public:
		explicit Zombie(string name);
		~Zombie();
		void announce(void);
		void setName(string name);
	private:
		string _name;
		string _type;
};

Zombie	*newZombie(string name);
void	randomChump(string name);

#endif