/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:38:57 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/02 16:20:26 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <stdexcept>

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
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
				const char * what() const throw();
		};

		class GradeTooLowExeption : public std::exception
		{
			public:
				const char * what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);


#endif