/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 21:20:39 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/27 21:29:18 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout
	<< "Brain: Default constructor called! "
	<< std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout
	<< "Brain: Copy constructor is called! "
	<< std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout
	<< "Brain: Copy assignment operator is called! "
	<< std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 10; i++) 
			ideas[i] = other.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout
	<< "Brain: Destructor is called! "
	<< std::endl;
}

void 