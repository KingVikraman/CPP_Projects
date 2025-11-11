/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:14:01 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/08 20:29:26 by rvikrama         ###   ########.fr       */
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
		AForm(std::string &name, int requiredGradeExceute, int requiredGradeSign);
		AForm(const AForm& other);
		AForm& operator=(const AForm&other);
		virtual ~AForm();

		std::string getName() const;
		bool isSigned() const;
		int getRequiredGradeExecute() const;
		int getRequiredGradeSign() const;

		void beSigned(const Bureaucrat& b);
		void execute(const Bureaucrat &executor) const;

};








#endif