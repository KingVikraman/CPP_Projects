/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:38:43 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/14 15:04:50 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include <exception>


int main()
{
	std::cout << "\n-----------------------------------------------------------\n" << std::endl;
	std::cout << "==================================" << std::endl;
	std::cout << "===   \x1B[33mBureaucrat Normal Test\033[0m   ===" << std::endl;
	std::cout << "==================================\n" << std::endl;
	try 
	{
		Bureaucrat defaultManager;
		Bureaucrat Manager("Manager", 42);
		std::cout << Manager << std::endl;
		std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;
		std::cout << "Increment Manager's Grade. " << std::endl;
		Manager.incrementGrade();
		std::cout << Manager << std::endl;
		std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;
		std::cout << "Decrement Manager's Grade. " << std::endl;
		Manager.decrementGrade();
		std::cout << Manager << std::endl;
		std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;
	}
	catch (std::exception &Error)
	{
		std::cerr << "Exeption: " << Error.what() << std::endl;
	}

	std::cout << "\n-----------------------------------------------------------\n" << std::endl;
	std::cout << "=================================" << std::endl;
	std::cout << "===  \x1B[33mBureaucrat Invalid Test\033[0m  ===" << std::endl;
	std::cout << "=================================\n" << std::endl;
	try
	{
		//Bureaucrat defualtInvalid;
		//Bureaucrat Invalid("WrongPerson", -1);
		Bureaucrat defaultInvalid2;
		Bureaucrat Invalid2("AlsoWrongPerson", 151);

	}
	catch (std::exception &Error)
	{
		std::cerr << "Exeption: " << Error.what() << std::endl;
	}

	std::cout << "\n-----------------------------------------------------------\n" << std::endl;
	std::cout << "=================================" << std::endl;
	std::cout << "===     \x1B[33mMulti Catch Test\033[0m      ===" << std::endl;
	std::cout << "=================================\n" << std::endl;
	try 
	{
		Bureaucrat Employee("Test Person", 24);
		std::cout << Employee << std::endl;
		std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;
		std::cout << "Increment Test Person's Grade. " << std::endl;
		Employee.incrementGrade();
		std::cout << Employee << std::endl;
		std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;
		std::cout << "Decrement Test Person's Grade. " << std::endl;
		Employee.decrementGrade();
		std::cout << Employee << std::endl;
		std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;
		std::cout << "All operations successful! " << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighExeption &Error)
	{
		std::cout << "🔼 High Grade Error: " << Error.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowExeption &Error)
	{
		std::cout << "🔽 Low Grade Error: " << Error.what() << std::endl;
	}
	catch (std::exception &Error)
	{
		std::cout << "Generic Error: " << Error.what() << std::endl;
	}
}