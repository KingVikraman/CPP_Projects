/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 21:55:58 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/28 21:56:34 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : brain(new Brain())
{
	type = "Dog";
	std::cout << "Dog constructed\n";
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Dog copied\n";
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other) {
		Animal::operator=(other);
		*brain = *other.brain; // deep copy contents
	}
	std::cout << "Dog assigned\n";
	return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destroyed\n";
}

void Dog::makeSound() const
{
	std::cout << "Woof!\n";
}

void Dog::setBrainIdea(int idx, const std::string& idea)
{
	brain->setIdea(idx, idea);
}

void Dog::showBrainIdea(int idx) const
{
	brain->showIdea(idx);
}
