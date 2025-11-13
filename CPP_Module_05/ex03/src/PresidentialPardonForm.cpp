/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:36:18 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/13 20:38:03 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Bureaucrat.hpp"


PresidentialPardonForm::PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
	: AForm("Presidential Pardon Form" , 5, 25)
	, privateTarget(target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
	: AForm(other) ,privateTarget(other.privateTarget)
{
	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (!isSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > ExecutionGetter())
		throw AForm::GradeTooLowException();
	std::cout << privateTarget << " has been pardoned by Zaphod Beeblerox"
	<< std::endl;

}