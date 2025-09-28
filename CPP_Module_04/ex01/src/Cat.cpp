/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raja <raja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 13:28:32 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/28 16:28:46 by raja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"


Cat::Cat() : brain(new Brain())
{
	type = "Dog! ";
	std::cout
	<< "Cat: Default constructor called! \n"
	<< std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout
	<< "Cat: Copy constructor called! \n"
	<< std::endl;
}

Cat &Cat::operator=(const Cat& other)
{
	std::cout
	<< "Cat: Copy assignment operator called! \n"
	<< std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		*brain = *other.brain;
	}
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout
	<< "Cat: Destructor called! \n"
	<< std::endl;
}

void Cat::makeSounds() const
{
	std::cout
	<< "Cat: Meow! Meow! Meow! \n"
	<< std::endl;
}

void Cat::setBrainIdea(int idx, const std::string& idea)
{
	brain->setIdea(idx, idea);
}

void Cat::showBrainIdea(int idx) const
{
	brain->showIdea(idx);
}