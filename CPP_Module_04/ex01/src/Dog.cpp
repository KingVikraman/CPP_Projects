/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raja <raja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 13:28:28 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/28 16:23:25 by raja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"


Dog::Dog() : brain(new Brain())
{
	type = "Dog";
	std::cout
	<< "Dog: Default constructor is called! \n"
	<< std::endl;
}


Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain))
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
	{
		Animal::operator=(other);
		*brain = *other.brain;
	}
	return *this;
}

Dog::~Dog()
{
	delete brain;
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

void Dog::setBrainIdea(int idx, const std::string &idea)
{
	brain->setIdea(idx, idea);
}

void Dog::showBrainIdea(int idx) const
{
	brain->showIdea(idx);
}
