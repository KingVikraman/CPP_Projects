/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 12:40:11 by rvikrama          #+#    #+#             */
/*   Updated: 2026/06/09 12:40:14 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "Error: No arguements\n";
		return (1);
	}
	
	try {
		PmergeMe PmergeMe;
		PmergeMe.parseInput(av);
	}
	catch(const std::exception &e) {
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}