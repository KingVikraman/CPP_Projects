/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:35:35 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/13 20:41:31 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm {
private:
	std::string	_target;
public:
	PresidentialPardonForm(const std::string _target);
	void	execute(Bureaucrat const & executor) const;
};
