/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 22:00:10 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/14 19:42:08 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"

int main()
{
	std::cout << "\n-----------------------------------------------------------\n" << std::endl;
	std::cout << "===================================" << std::endl;
	std::cout << "==  \x1B[33mBureaucrat Multi Catch Test\033[0m  ==" << std::endl;
	std::cout << "===================================\n" << std::endl;
	try 
	{
		Bureaucrat Employee("Test Person", 42);
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

	std::cout << "\n-----------------------------------------------------------\n" << std::endl;
	std::cout << "===================================" << std::endl;
	std::cout << "===   \x1B[33mForm Exception Handling\033[0m   ===" << std::endl;
	std::cout << "===================================\n" << std::endl;
	try
	{
		//Form TooHighToSign("WrongForm", 50, 0);
		//Form TooLowToSign("WrongForm", 50, 151);
		//Form TooLowToExec("WrongForm", 151, 50);
		//Form TooHighToExec("WrongForm", 0, 50);
	}
	catch (const Form::GradeTooHighException &Error)
	{
		std::cout << "🔼 High Grade Error: " << Error.what() << std::endl;
	}

	catch (const Form::GradeTooLowException &Error)
	{
		std::cout << "🔽 Low Grade Error: " << Error.what() << std::endl;
	}

	catch (std::exception &Error)
	{
		std::cout << "General Error: " << Error.what() << std::endl;
	}

	std::cout << "\n-----------------------------------------------------------\n" << std::endl;
	std::cout << "===================================" << std::endl;
	std::cout << "===   \x1B[33mForm Signing Scenarios\033[0m   ===" << std::endl;
	std::cout << "===================================\n" << std::endl;

	Form formNormalGrade("Normal Form", 25, 70);
	Form formHighGrade("High Grade Form", 1, 1);
	Form formLowGrade("Low Grade Form", 150, 149);
	Bureaucrat CEO("Ceo", 1);
	Bureaucrat HOD("HOD", 25);
	Bureaucrat Worker("Worker", 150);

	CEO.signingForm(formNormalGrade);
	CEO.signingForm(formHighGrade);
	CEO.signingForm(formNormalGrade);

	HOD.signingForm(formNormalGrade);
	HOD.signingForm(formHighGrade);
	HOD.signingForm(formNormalGrade);

	Worker.signingForm(formNormalGrade);
	Worker.signingForm(formHighGrade);
	Worker.signingForm(formNormalGrade);

	std::cout << formNormalGrade << std::endl;
	return (0);
}