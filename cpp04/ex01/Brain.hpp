/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:35:49 by craimond          #+#    #+#             */
/*   Updated: 2024/04/22 18:11:37 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define GREEN "\033[32m"
# define RED "\033[31m"
# define BLUE "\033[34m"
# define NC "\033[0m"

# define BRAIN_SIZE 100

class Brain
{
	public:
		Brain();
		Brain(const Brain& other); //copy constructor
		Brain &operator=(const Brain& other); //copy assignment operator
		~Brain();
	protected:
		std::string *_ideas;
};

#endif