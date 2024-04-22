/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:34:04 by craimond          #+#    #+#             */
/*   Updated: 2024/04/22 18:55:36 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* k = new Animal(); //deve dare errore, perche' Animal e' una classe astratta

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	std::cout << "tipo di i: " << i->getType() << std::endl;
	
	delete j;//should not create a leak
	delete i;

	return 0;
}