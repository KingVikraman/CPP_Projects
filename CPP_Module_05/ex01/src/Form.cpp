/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 22:02:02 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/07 20:54:25 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"


Form::Form(const std::string &name, int gradeToSign, int gradeToExecute)
	: _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "Form : Parameterised Constructor Called!" << std::endl;
	if ((gradeToSign || gradeToExecute) < 1)
		throw GradeTooHighException();
	if ((gradeToSign || gradeToExecute) < 1)
		throw GradeTooLowException();
}

Form::Form(const Form &other) : _name(other._name) ,
	_isSigned(other._isSigned) ,
	_gradeToSign(other._gradeToSign) ,
	_gradeToExecute(other._gradeToExecute)
{
	std::cout << "Form : Copy Constructor  Called!" << std::endl;
}


Form &Form::operator=(const Form &other)
{
	std::cout << "Form : Copy Assignment Operator Called!" << std::endl;
	if (this != &other)
		_isSigned = other._isSigned;

	return *this;
}

Form::~Form()
{
	std::cout << "Form : Destructor Called!" << std::endl;
}

const std::string &Form::getName() const
{
	return _name;
	std::cout << "H" << std::endl;
}

bool Form::isSigned() const
{
	return _isSigned;
}

int Form::getGradeToSign() const
{
	return _gradeToSign;
}

int Form::getGradeToExecute() const
{
	return _gradeToExecute;
}

void Form::beSigned(const Bureaucrat &sign)
{
	if (sign.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Form : Grade to High!";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Form : Grade to Low!";
}

std::ostream &operator<<(std::ostream &outs, const Form &form)
{
	outs << "Form: " << form.getName() << " | Signed: "
	 << (form.isSigned() ? "Yes" : "No") << " | Grade to Sign: "
	 << form.getGradeToSign() << " | Grade to Execute: "
	 << form.getGradeToExecute();
	return outs;
}