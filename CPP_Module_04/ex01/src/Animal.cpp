/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 13:28:34 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/26 13:29:30 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal() : type("Animal")
{
	std::cout
	<< "Animal -> default constructor called! \n"
	<< std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout
	<< "Animal -> copy constructor called! \n"
	<< std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout
	<< "Animal -> copy assignment operator is called! \n"
	<< std::endl;
	if (this != &other)
		type = other.type;
	return *this;
}

Animal::~Animal()
{
	std::cout
	<< "Animal destructor is called! \n"
	<< std::endl;
}

void Animal::makeSounds() const
{
	std::cout
	<< "Animal: Some type of animal sound? \n"
	<< std::endl;
}

std::string const & Animal::getType() const
{
	return type;
}