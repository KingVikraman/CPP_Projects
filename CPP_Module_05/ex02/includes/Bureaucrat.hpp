/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:17:59 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/15 20:49:51 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>
#include <exception>

class AForm;


class Bureaucrat
{
	private:
		const std::string privateName;
		int privateGrade;
		/* const before the return type ensures that the data
			returned cannot be modified through that referance */
		/* const after the method parantheses makes the methods 
			"read-only".*/

	public: 
		/* ❰ Constructors & Destructors ❱ */
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat();

		/* ❰ Getters ❱ */
		const std::string &getName ()const;
		int getGrade() const;
		/* Usage of getName and getGrade from the Subject.*/

		/* ❰ Grade Control❱ */
		void incrementGrade();
		void decrementGrade();
		void signingForm(AForm &form);
		void executeForm(AForm const &form);

		/* ❰ Exception Classes ❱ */
		/* This class within a class is a new implementation called scoped classes.
			This is just technically namespacing a class inside 
			another.
			➤ Normally, we might have a global class like GradeTooHighExeception
			➤ But if we define it inside Bureaucrat like the one here,
				its full name becomes " Bureaucrat::GradeTooHighException"
			➤ This is just a C++ way of saying like " Hey this exception class belongs to Bureaucrat".*/
		class GradeTooHighExeption : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		class GradeTooLowExeption : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);


#endif