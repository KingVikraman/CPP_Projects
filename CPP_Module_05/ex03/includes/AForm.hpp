/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:35:15 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/16 22:06:51 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <exception>
#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

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
		int ExecutionGetter() const;
		int SigningGetter() const;

		void beSigned(const Bureaucrat& B);
		void execute(const Bureaucrat &executor) const;
		virtual void executeAction(Bureaucrat const& executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

};

std::ostream& operator<<(std::ostream& os, const AForm& form);


#endif
