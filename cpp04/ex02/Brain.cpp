/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:52:53 by craimond          #+#    #+#             */
/*   Updated: 2024/04/22 18:11:46 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	_ideas = new std::string[BRAIN_SIZE];
	std::cout << GREEN "Brain constructor called" NC << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
    if (this != &other)
	{
        delete[] this->_ideas;
        this->_ideas = new std::string[BRAIN_SIZE]; // Allocate new resources
        for (int i = 0; i < BRAIN_SIZE; i++)
            this->_ideas[i] = other._ideas[i]; // Copy each element
    }
    return *this;
}

Brain::Brain(const Brain& other)
{
	*this = other;
    std::cout << "Animal constructor called" << std::endl;
}

Brain::~Brain()
{
	delete[] _ideas;
	std::cout << RED "Brain destructor called" NC << std::endl;
}