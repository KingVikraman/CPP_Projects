/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:36:16 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/16 23:31:02 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/Intern.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
	std::srand(std::time(0));
	Bureaucrat Ceo("Ceo", 1);
	Bureaucrat Worker("Slave", 150);
	Intern Intern;

	std::cout << "\n-----------------------------------------------------------\n" << std::endl;
	std::cout << "===================================" << std::endl;
	std::cout << "===    \x1B[33mINTERN TEST\033[0m     ===" << std::endl;
	std::cout << "===================================\n" << std::endl;

	AForm* form1 = Intern.makeForm("Presidential Pardon Form", "Shaun");
	AForm* form2 = Intern.makeForm("Robotomy Request Form", "Bryan");
	AForm* form3 = Intern.makeForm("Shrubbery Creation Form", "Zep");
	AForm* form4 = Intern.makeForm("abc form", "abc form");
	std::cout << std::endl;
	
	if (form1)
	{
		Ceo.signingForm(*form1);
		Ceo.executeForm(*form1);
	}
	if (form2)
	{
		Ceo.signingForm(*form2);
		Ceo.executeForm(*form2);
	}
	if (form3)
	{
		Ceo.signingForm(*form3);
		Ceo.executeForm(*form3);
	}
	std::cout << std::endl;

	delete form1;
	delete form2;
	delete form3;
	delete form4;
	return (0);
}