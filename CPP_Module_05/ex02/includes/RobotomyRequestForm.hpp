/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:15:45 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/13 20:02:01 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string privateTarget;

	public:
		RobotomyRequestForm(const std::string target);
		void execute(const Bureaucrat& executor) const;
};