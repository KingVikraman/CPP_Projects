/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:15:45 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/15 20:38:54 by rvikrama         ###   ########.fr       */
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
		void executeAction(const Bureaucrat& executor) const;
};