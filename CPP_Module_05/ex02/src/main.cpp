/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:15:55 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/16 23:41:59 by rvikrama         ###   ########.fr       */
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

	std::cout << "\n-----------------------------------------------------------\n" << std::endl;
	std::cout << "==================================" << std::endl;
	std::cout << "===   \x1B[33mFORM SIGNING SCENARIOS\033[0m   ===" << std::endl;
	std::cout << "==================================\n" << std::endl;
	//AForm form1("Normal Grade Form", 25, 50);
	PresidentialPardonForm PresidentForm("Presidentform");
	RobotomyRequestForm RobotomyForm("Robotomyform");
	ShrubberyCreationForm ShrubForm("Shrubform");
	Bureaucrat Ceo("Ceo", 1);
	Bureaucrat HOD("HOD", 50);
	Bureaucrat Worker("Worker", 150);
	
	std::cout << "\n-----------------------------------------------------------\n" << std::endl;
	std::cout << "==================================" << std::endl;
	std::cout << "===     \x1B[33mUNSIGNED FORM TEST\033[0m     ===" << std::endl;
	std::cout << "==================================\n" << std::endl;
	Ceo.executeForm(PresidentForm);
	HOD.executeForm(RobotomyForm);
	Worker.executeForm(ShrubForm);

	std::cout << "\n-----------------------------------------------------------\n" << std::endl;
	std::cout << "====================================" << std::endl;
	std::cout << "=====     \x1B[33mSIGNED FORM TEST\033[0m     =====" << std::endl;
	std::cout << "====================================\n" << std::endl;
	Ceo.signingForm(PresidentForm);
	Ceo.signingForm(RobotomyForm);
	Worker.signingForm(ShrubForm); //wrong case

	std::cout << "\n-----------------------------------------------------------\n" << std::endl;
	std::cout << "============================================" << std::endl;
	std::cout << "=== \x1B[33mEXECUTE FORM INSUFFICIENT GRADE TEST\033[0m ===" << std::endl;
	std::cout << "============================================\n" << std::endl;
	Worker.executeForm(PresidentForm);
	Worker.executeForm(RobotomyForm);
	Worker.executeForm(ShrubForm);//improper signing
	
	std::cout << "\n-----------------------------------------------------------\n" << std::endl;
	std::cout << "==================================" << std::endl;
	std::cout << "===  \x1B[33m EXECUTE FORM GRADE TEST\033[0m  ===" << std::endl;
	std::cout << "==================================\n" << std::endl;
	Ceo.executeForm(PresidentForm);
	Ceo.executeForm(RobotomyForm);
	Ceo.executeForm(ShrubForm);//proper execute, improper signing
	
	std::cout << "\n-----------------------------------------------------------\n" << std::endl;
	std::cout << "=============================================" << std::endl;
	std::cout << "=== \x1B[33mRANDOM 50 PERCENT CHANCE FOR ROBOTOMY\033[0m ===" << std::endl;
	std::cout << "=============================================\n" << std::endl;
	for (int i = 0; i < 6; i++)
		Ceo.executeForm(RobotomyForm); 

	std::cout << "\n-----------------------------------------------------------\n" << std::endl;
	std::cout << "====================================" << std::endl;
	std::cout << "========    \x1B[33mPROPER SHRUB\033[0m    ========" << std::endl;
	std::cout << "====================================\n" << std::endl;	Ceo.signingForm(ShrubForm);
	Ceo.executeForm(ShrubForm);
	return (0);
}

