/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 13:28:13 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/26 13:28:23 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	std::cout
	<< "WrongAnimal: Default constructor called! \n"
	<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
	std::cout
	<< "WrongAnimal: Copy constructor is called! \n"
	<< std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout
	<< "WrongAnimal: Copy assignment operator is called! \n"
	<< std::endl;
	if (this != &other)
		type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout
	<< "WrongAnimal: Destructor is called! \n"
	<< std::endl;
}


void WrongAnimal::makeSound() const
{
	std::cout
	<< "WrongAnimal: *some wrong animal sound that shouldnt be made! \n"
	<< std::endl;
}

std::string const &WrongAnimal::getType() const
{
	return type;
}