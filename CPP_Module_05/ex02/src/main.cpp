/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:15:55 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/15 20:50:09 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "cstdlib"
#include "ctime"

int main()
{
	std::srand(std::time(NULL));
	
	std::cout << "\n=== FORM SIGNING SCENARIOS ===" << std::endl;
	//AForm form1("Normal Grade Form", 25, 50);
	PresidentialPardonForm PresidentForm("Presidentform");
	RobotomyRequestForm RobotomyForm("Robotomyform");
	ShrubberyCreationForm ShrubForm("Shrubform");
	Bureaucrat Ceo("Ceo", 1);
	Bureaucrat CommonPeople("Common People", 50);
	Bureaucrat Slave("Slave", 150);
	
	std::cout << "\n=== UNSIGNED FORM TEST ===" << std::endl;
	Ceo.executeForm(PresidentForm);
	CommonPeople.executeForm(RobotomyForm);
	Slave.executeForm(ShrubForm);

	std::cout << "\n=== SIGNED FORM TEST ===" << std::endl;
	Ceo.signingForm(PresidentForm);
	Ceo.signingForm(RobotomyForm);
	Slave.signingForm(ShrubForm); //wrong case

	std::cout  << "\n=== EXECUTE FORM INSUFFICIENT GRADE TEST ===" << std::endl;
	Slave.executeForm(PresidentForm);
	Slave.executeForm(RobotomyForm);
	Slave.executeForm(ShrubForm);//improper signing
	
	std::cout  << "\n=== EXECUTE FORM GRADE TEST ===" << std::endl;
	Ceo.executeForm(PresidentForm);
	Ceo.executeForm(RobotomyForm);
	Ceo.executeForm(ShrubForm);//proper execute, improper signing
	
	std::cout << "\n=== RANDOM 50 PERCENT CHANCE FOR ROBOTOMY ===" << std::endl;
	for (int i = 0; i < 6; i++)
		Ceo.executeForm(RobotomyForm); 

	std::cout << "\n=== PROPER SHRUB ===" << std::endl;
	Ceo.signingForm(ShrubForm);
	Ceo.executeForm(ShrubForm);
	return (0);
}