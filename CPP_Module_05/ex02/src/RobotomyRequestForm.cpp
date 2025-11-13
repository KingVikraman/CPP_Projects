/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:16:59 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/13 20:40:13 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
	AForm("Robotomy Request Form", 45, 72), _target(target)
{}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if(!getIsSigned())
		throw AForm::FormNotSignedException();
	if(executor.getGrade() > getGradeToExec())
		throw AForm::GradeTooLowException();
	
	std::cout << "DRRRRRRR....GRRRRRR....BRRRRRRR" << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << _target << " succesfully robotomized!" << std::endl; 
	else
		std::cout << _target << " failed robotomization!" << std::endl;
}