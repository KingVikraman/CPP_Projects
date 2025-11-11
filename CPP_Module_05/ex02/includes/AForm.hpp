/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:14:01 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/11 20:50:04 by rvikrama         ###   ########.fr       */
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
		const int _requiredGradeExecute;
		const int _requiredGradeSign;

	public:
		AForm();
		AForm(std::string &name, int requiredGradeExecute, int requiredGradeSign);
		AForm(const AForm& other);
		AForm& operator=(const AForm&other);
		virtual ~AForm();

		std::string getName() const;
		bool isSigned() const;
		int getRequiredGradeExecute() const;
		int getRequiredGradeSign() const;

		void beSigned(const Bureaucrat& b);
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

};

std::ostream& operator<<(std::ostream& os, const AForm& form);


#endif