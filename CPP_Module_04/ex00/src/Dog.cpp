/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 13:28:28 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/26 13:29:08 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
	type = "Dog";
	std::cout
	<< "Dog: Default constructor is called! \n"
	<< std::endl;
}


Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout
	<< "Dog: Copy constructor called! \n"
	<< std::endl;
}

Dog &Dog::operator=(const Dog& other)
{
	std::cout
	<< "Dog: Copy assignment operator called! \n"
	<< std::endl;

	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Dog::~Dog()
{
	std::cout
	<< "Dog: Destructor is called! \n"
	<<std::endl;
}

void Dog::makeSounds() const
{
	std::cout
	<< "Dog : Woof! Woof! Woof! \n"
	<< std::endl;
}