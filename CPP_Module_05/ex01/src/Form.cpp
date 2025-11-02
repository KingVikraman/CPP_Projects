/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 22:02:02 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/02 22:02:29 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute)
    : _name(name), _isSigned(false),
      _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {

    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &other)
    : _name(other._name),
      _isSigned(other._isSigned),
      _gradeToSign(other._gradeToSign),
      _gradeToExecute(other._gradeToExecute) {}

Form &Form::operator=(const Form &other) {
    if (this != &other) {
        _isSigned = other._isSigned;
    }
    return *this;
}

Form::~Form() {}

const std::string &Form::getName() const { return _name; }
bool Form::isSigned() const { return _isSigned; }
int Form::getGradeToSign() const { return _gradeToSign; }
int Form::getGradeToExecute() const { return _gradeToExecute; }

void Form::beSigned(const Bureaucrat &b) {
    if (b.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    _isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Form: Grade too high!";
}
const char *Form::GradeTooLowException::what() const throw() {
    return "Form: Grade too low!";
}

std::ostream &operator<<(std::ostream &os, const Form &f) {
    os << "Form: " << f.getName()
       << " | Signed: " << (f.isSigned() ? "Yes" : "No")
       << " | Grade to Sign: " << f.getGradeToSign()
       << " | Grade to Execute: " << f.getGradeToExecute();
    return os;
}
