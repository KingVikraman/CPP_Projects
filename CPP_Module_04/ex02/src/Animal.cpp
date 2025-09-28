/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 21:51:37 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/28 21:52:01 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal constructed\n";
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "Animal copied\n";
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		type = other.type;
	std::cout << "Animal assigned\n";
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destroyed\n";
}

std::string Animal::getType() const
{
	return type;
}
