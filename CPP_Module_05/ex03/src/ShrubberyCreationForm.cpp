/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:36:33 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/13 20:38:38 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :
	AForm("Shrubbery Creation Form", 137, 145), _target(target)
{}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!SigningGetter())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > ExecutionGetter())
		throw AForm::GradeTooLowException();
	
	std::string filename = privateTarget + "_shrubbery";
	std::ofstream file(filename.c_str());
	
	if (!file.is_open())
	{
		std::cerr << "Error: Could not create file " << filename << std::endl;
		return ;
	}
	
    file << "       ^       " << std::endl;
    file << "      ^^^      " << std::endl;
    file << "     ^^^^^     " << std::endl;
    file << "    ^^^^^^^    " << std::endl;
    file << "   ^^^^^^^^^   " << std::endl;
    file << "  ^^^^^^^^^^^  " << std::endl;
    file << " ^^^^^^^^^^^^^ " << std::endl;
    file << "^^^^^^^^^^^^^^^" << std::endl;
    file << "      |||      " << std::endl;
    file << "      |||      " << std::endl;

	file.close();
	std::cout << "Shrubbery created in file: " << filename << std::endl;
}