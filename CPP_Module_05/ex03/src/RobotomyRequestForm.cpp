/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:36:30 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/16 22:11:08 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
	AForm("Robotomy Request Form", 45, 72), privateTarget(target)
{}

void	RobotomyRequestForm::executeAction(Bureaucrat const & executor) const
{
	if(!SigningGetter())
		throw AForm::FormNotSignedException();
	if(executor.getGrade() > ExecutionGetter())
		throw AForm::GradeTooLowException();
	
	std::cout << "DRRRRRRR....GRRRRRR....BRRRRRRR" << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << privateTarget << " succesfully robotomized!" << std::endl; 
	else
		std::cout << privateTarget << " failed robotomization!" << std::endl;
}