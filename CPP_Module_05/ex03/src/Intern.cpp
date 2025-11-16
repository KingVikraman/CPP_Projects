/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:35:12 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/16 22:14:21 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include "../includes/AForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include <iostream>

Intern::Intern()
{}

Intern::Intern(const Intern& other)
{
	(void)other;
}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return(*this);
}

Intern::~Intern()
{}

AForm* Intern::makeForm(const std::string formNameParam, const std::string target)
{
	std::string formName[3] = 
	{
		"Presidential Pardon Form",
		"Robotomy Request Form",
		"Shrubbery Creation Form"
	};
	for (int i = 0; i < 3; i++)
	{
		if (formNameParam == formName[i])
		{
			std::cout << "Intern creates " << formName[i] << std::endl;
			switch(i)
			{
				case 0:
					return new PresidentialPardonForm(target);
				case 1:
					return new RobotomyRequestForm(target);
				case 2:
					return new ShrubberyCreationForm(target);
			}
		}
		
	}
	std::cout << "Intern cannot create " << formNameParam 
		<< " -name given dont exists" << std::endl;
	return NULL;
}