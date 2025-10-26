/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:38:43 by rvikrama          #+#    #+#             */
/*   Updated: 2025/10/26 21:47:15 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include <exception>


int main()
{
	std::cout
	<< "=== Bureaucrat System Test ==="
	<< std::endl;

	try
	{
		Bureaucrat raja("Raja", 42);
		std::cout << raja << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exxeption: " << e.what() << std::endl;
	}
}