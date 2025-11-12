/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:14:01 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/12 20:40:54 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string _name;
		bool _isSigned;
		const int _requiredExecutionGrade;
		const int _requiredSigningGrade;

	public:
		AForm();
		AForm(const std::string &name, int requiredGradeExecute, int requiredGradeSign);
		AForm(const AForm& other);
		AForm& operator=(const AForm&other);
		virtual ~AForm();

		std::string getName() const;
		bool isSigned() const;
		int ExecutingGetter() const;
		int SigningGetter() const;

		void beSigned(const Bureaucrat& B);
		void execute(const Bureaucrat &executor) const;
		virtual void executeAction() const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char * what() const throw();
		};

		class FormNotSignedException : public std::exception
		{
			public:
				const char * what() const throw();
		};

};

std::ostream& operator<<(std::ostream& os, const AForm& form);


#endif


/* Notes:
1. AForm(const std::string &name, ...)

This version takes a reference to a constant string.
-> The & means the constructor doesn’t make a copy of
   the argument when it’s called.
-> t just refers to the original string that was passed
   in (temporarily, only for the duration of construction).
-> Since it’s const, the constructor cannot modify that string
-> Then, in your member initializer list _name(name), a copy of
   name is made into _name.

One copy happens — from name (the reference) into _name (your member).

2. AForm(const std::string name, ...)

This one takes the string by value, meaning:
-> When you call the constructor, the argument is copied immediately
   into a new local variable name.
-> Then, _name(name) makes another copy into the member variable.

So now there are two copies — one from the argument to the parameter,
and another from the parameter to _name.
It’s technically valid, but wasteful. You’re just creating an extra copy for no reason.

*/