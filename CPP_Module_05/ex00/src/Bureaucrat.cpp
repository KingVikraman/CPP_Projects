/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:39:12 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/14 13:49:04 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

/* ❰ Default Constructor ❱ */
Bureaucrat::Bureaucrat() : privateName("Unnamed"), privateGrade(150)
{
	std::cout << "Default: " << privateName << "," << privateGrade << std::endl;
}

/* ❰ Param Constructor ❱ */
Bureaucrat::Bureaucrat(const std::string &name, int grade)
	: privateName(name) , privateGrade(grade)
{
	if (grade < 1)
		throw GradeTooHighExeption();
	if (grade > 150)
		throw GradeTooLowExeption();
	std::cout
	<< "Bureaucrat has been constructed: "
	<< privateName << std::endl;
}

/* ❰ Copy Consturctor ❱ */
Bureaucrat::Bureaucrat(const Bureaucrat &other) : privateName(other.privateName)
		, privateGrade(other.privateGrade)
{
	std::cout
	<< "Bureaucrat has been copied: "
	<< privateName << std::endl;
}

/* ❰ Copy Assingment Operator ❱ */
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
		this->privateGrade = other.privateGrade;
	std::cout
	<< "Bureaucrat Assigned: "
	<< privateName << std::endl;
	 return *this;
}

/* ❰ Destructor ❱ */
Bureaucrat::~Bureaucrat()
{
	std::cout
	<< "Bureaucrat Destroyed: "
	<< privateName << std::endl;
}


/* ❰ Getters ❱ */
const std::string &Bureaucrat::getName() const
{
	return privateName;
}

int Bureaucrat::getGrade() const
{
	return privateGrade;
}

/* ❰ Grade Control ❱ */
void Bureaucrat::incrementGrade()
{
	if (privateGrade <= 1)
		throw GradeTooHighExeption();
	privateGrade--;
}

void Bureaucrat::decrementGrade()
{
	if (privateGrade >= 150)
		throw GradeTooLowExeption();
	privateGrade++;
}

/* ❰ Operator Overload ❱ */
std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", Bureaucrat grade " << b.getGrade() << ".";
	return out;
}


const char* Bureaucrat::GradeTooHighExeption::what() const throw()
{
	return "Grade  Is too High!";
}

const char* Bureaucrat::GradeTooLowExeption::what() const throw()
{
	return "Grade too Low! ";
}
