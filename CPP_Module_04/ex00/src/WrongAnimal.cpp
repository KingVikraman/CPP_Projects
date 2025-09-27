/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 13:28:13 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/27 20:21:34 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal! ";
	std::cout
	<< "WrongAnimal: Default constructor called! "
	<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
	std::cout
	<< "WrongAnimal: Copy constructor is called! "
	<< std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout
	<< "WrongAnimal: Copy assignment operator is called! "
	<< std::endl;
	if (this != &other)
		type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout
	<< "WrongAnimal: Destructor is called! "
	<< std::endl;
}


void WrongAnimal::makeSound() const
{
	std::cout
	<< "WrongAnimal: *some wrong animal sound that shouldnt be made! "
	<< std::endl;
}

std::string const &WrongAnimal::getType() const
{
	return type;
}