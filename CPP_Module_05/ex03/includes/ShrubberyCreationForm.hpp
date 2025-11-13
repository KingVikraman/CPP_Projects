/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:35:40 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/13 20:41:18 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm {
private:
	std::string _target;
public:
	ShrubberyCreationForm(const std::string target);
	void	execute(Bureaucrat const & executor) const;
};