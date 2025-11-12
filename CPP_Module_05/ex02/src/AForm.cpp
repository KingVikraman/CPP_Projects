/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:15:51 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/12 21:10:48 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"

AForm::AForm() : _name("Default") , _isSigned(false)
	, _requiredExecutionGrade(0) , _requiredSigningGrade(0)
{
	std::cout << "AForm : DEfault constructor called." << std::endl;
}

AForm::AForm(const std::string &name, int gradeToExecute, int gradeToSign)
	: _name(name) , _isSigned(false) , _requiredExecutionGrade(gradeToExecute),
	_requiredSigningGrade(gradeToSign)
{
	if (gradeToSign  < 1 || gradeToExecute < 1)
		throw GradeTooLowException();
	if (gradeToSign  > 150 || gradeToExecute > 150)
		throw GradeTooHighException();	
}

AForm::AForm(const AForm& other) : _name(other._name) , _isSigned(other._isSigned),
	_requiredExecutionGrade(other._requiredExecutionGrade),
	_requiredSigningGrade(other._requiredSigningGrade)
{
	std::cout << "AForm : Copy constructor called ! " << std::endl;
}

AForm& AForm::operator=(const AForm& other)
{
	if (this != &other)
		_isSigned = other._isSigned;
	return *this;
}

std::string AForm::getName() const
{
	return _name;
}

bool AForm::isSigned() const
{
	return _isSigned;
}

int AForm::SigningGetter() const
{
	return _requiredSigningGrade;
}

int AForm::ExecutingGetter() const
{
	return _requiredExecutionGrade;
}

void AForm::beSigned(const Bureaucrat& B)
{
	if (B.getGrade() > _requiredExecutionGrade)
		throw FormNotSignedException();
	_isSigned = true;
}

void AForm::execute(const Bureaucrat &executor) const
{
	if (!_isSigned)
		throw FormNotSignedException();
	if (executor.getGrade() > _requiredExecutionGrade)
		throw GradeTooLowExeption();
	executeAction();
}

std::ostream& operator<<(std::ostream& os, const AForm& form) {
	os << "Form " << form.getName() << ", Signed: " << form.isSigned() 
		<< ", Grade required to sign: " << form.ExecutingGetter()
		<< ", Grade required to execute: " << form.SigningGetter();
	return os;
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "Grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "Grade is too low!";
}

const char* AForm::FormNotSignedException::what() const throw() {
	return "Form is not signed!";
}
