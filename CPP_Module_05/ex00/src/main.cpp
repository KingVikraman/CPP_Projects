/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:38:43 by rvikrama          #+#    #+#             */
/*   Updated: 2025/10/31 18:12:07 by rvikrama         ###   ########.fr       */
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
		Bureaucrat raja("Raja", 151);
		std::cout << raja << std::endl;

		std::cout << "Increment Raja's Grade. " << std::endl;
		raja.incrementGrade();
		std::cout << raja << std::endl;

		std::cout << "Decrement Raja's Grade. " << std::endl;
		raja.decrementGrade();
		std::cout << raja << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exeption: " << e.what() << std::endl;
	}
}