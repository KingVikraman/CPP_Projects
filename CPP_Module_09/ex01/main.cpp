/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 19:19:27 by rvikrama          #+#    #+#             */
/*   Updated: 2026/05/29 19:19:36 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: Please enter a single RPN expression\n";
		return (1);
	}
	RPN RPN;
	try
	{
		std::cout << RPN.evaluate(av[1]) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr<< e.what() << std::endl;
		return (1);
	}
	return (0);
}