/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:31:07 by craimond          #+#    #+#             */
/*   Updated: 2024/03/20 21:56:38 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <stdint.h>
#include <iostream>
#include <map>

#define ORANGE "\033[33m"
#define CYAN "\033[36m"
#define PURPLE "\033[35m"
#define RED "\033[31m"
#define NC "\033[0m"

class Harl
{
	public:
		Harl();
		~Harl();
		Harl(const Harl &other);
		Harl &operator=(const Harl &other);
		void	complain(std::string level);
		void	silence(std::string level);
	private:
	 	void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
		std::string	_silenced_level;
};

#endif