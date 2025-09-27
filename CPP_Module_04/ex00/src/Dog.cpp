/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 13:28:28 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/27 20:12:30 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"


Dog::Dog()
{
	type = "Dog! ";
	std::cout
	<< "Dog: Default constructor is called! "
	<< std::endl;
}


Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout
	<< "Dog: Copy constructor called! "
	<< std::endl;
}

Dog &Dog::operator=(const Dog& other)
{
	std::cout
	<< "Dog: Copy assignment operator called! "
	<< std::endl;

	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Dog::~Dog()
{
	std::cout
	<< "Dog: Destructor is called! "
	<<std::endl;
}

void Dog::makeSounds() const
{
	std::cout
	<< "Dog : Woof! Woof! Woof! "
	<< std::endl;
}