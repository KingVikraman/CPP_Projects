/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:35:37 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/13 20:41:25 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm {
private:
	std::string _target;
public:
	RobotomyRequestForm(const std::string target);
	void	execute(Bureaucrat const & executor) const;
};