/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:15:51 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/11 21:28:21 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"

AForm::AForm() : _name("Default") , _isSigned(false)
	, _requiredGradeExecute(0) , _requiredGradeSign(0)
{
	std::cout << "AForm : DEfault constructor called." << std::endl;
}

AForm::AForm(const std::string &name, int gradeToExecute, int gradeToSign)
	: _name(name) , _isSigned(false) , _requiredGradeExecute(gradeToExecute),
	_requiredGradeSign(gradeToSign)
{
	if (gradeToSign  < 1 || gradeToExecute < 1)
		throw GradeTooLowException();
	if (gradeToSign  > 150 || gradeToExecute > 150)
		throw GradeTooHighException();	
}