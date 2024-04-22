/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:32:36 by craimond          #+#    #+#             */
/*   Updated: 2024/04/22 16:35:18 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "dog";
	std::cout << GREEN "Dog constructor called" NC << std::endl;
}

Dog::~Dog()
{
	std::cout << RED "Dog destructor called" NC << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "bau" << std::endl;
}