/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raja <raja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 13:28:32 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/27 12:36:46 by raja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat()
{
	type = "Cat! ";
	std::cout
	<< "Cat: Default constructor called! "
	<< std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout
	<< "Cat: Copy constructor called! "
	<< std::endl;
}

Cat &Cat::operator=(const Cat& other)
{
	std::cout
	<< "Cat: Copy assignment operator called! "
	<< std::endl;
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Cat::~Cat()
{
	std::cout
	<< "Cat: Destructor called! "
	<< std::endl;
}

void Cat::makeSounds() const
{
	std::cout
	<< "Cat: Meow! Meow! Meow! \n"
	<< std::endl;
}