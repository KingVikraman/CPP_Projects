/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 21:52:32 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/28 21:53:06 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructed\n";
}

Brain::Brain(const Brain& other)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	std::cout << "Brain copied\n";
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other) {
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	std::cout << "Brain assigned\n";
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed\n";
}

void Brain::setIdea(int idx, const std::string& idea)
{
	if (idx >= 0 && idx < 100)
		ideas[idx] = idea;
}

void Brain::showIdea(int idx) const
{
	if (idx >= 0 && idx < 100)
		std::cout << "Idea[" << idx << "]: " << ideas[idx] << std::endl;
}
