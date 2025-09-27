/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 13:28:34 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/27 20:13:10 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"


Animal::Animal()
{
	type = "Animal! ";
	std::cout
	<< "Animal -> default constructor called! "
	<< std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout
	<< "Animal -> copy constructor called! "
	<< std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout
	<< "Animal: Copy assignment operator is called! "
	<< std::endl;
	if (this != &other)
		type = other.type;
	return *this;
}

Animal::~Animal()
{
	std::cout
	<< "Animal: Destructor is called! "
	<< std::endl;
}

void Animal::makeSounds() const
{
	std::cout
	<< "Animal: Some type of animal sound? "
	<< std::endl;
}

std::string const & Animal::getType() const
{
	return type;
}