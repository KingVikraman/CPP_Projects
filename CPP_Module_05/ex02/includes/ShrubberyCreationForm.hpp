/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:15:48 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/15 20:38:59 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string privateTarget;

	public:
		ShrubberyCreationForm(const std::string target);
		void	executeAction(const Bureaucrat& executor) const;
};