/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 21:59:17 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/28 21:59:51 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : brain(new Brain())
{
	type = "Cat";
	std::cout << "Cat constructed\n";
}

Cat::Cat(const Cat& other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Cat copied\n";
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other) {
		Animal::operator=(other);
		*brain = *other.brain;
	}
	std::cout << "Cat assigned\n";
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destroyed\n";
}

void Cat::makeSound() const
{
	std::cout << "Meow!\n";
}

void Cat::setBrainIdea(int idx, const std::string& idea)
{
	brain->setIdea(idx, idea);
}

void Cat::showBrainIdea(int idx) const
{
	brain->showIdea(idx);
}
