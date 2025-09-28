/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raja <raja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 13:27:45 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/28 16:15:26 by raja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	std::cout << "\n-----------------------------------------------------------\n" << std::endl;
	std::cout << "===================================" << std::endl;
	std::cout << "===  \x1B[33mCorrect Polymorshism Test\033[0m  ===" << std::endl;
	std::cout << "===================================\n" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1B[32m[Orthodox Collonial Form.]\033[0m" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;


	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1B[32m[Type of Class Called.]\033[0m" << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1B[32m[Sound.]\033[0m" << std::endl;
	i->makeSounds();
	j->makeSounds();
	meta->makeSounds();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1B[32m[Cleanup.]\033[0m" << std::endl;
	delete meta;
	delete j;
	delete i;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	


	std::cout << "\n-----------------------------------------------------------\n" << std::endl;
	std::cout << "=================================" << std::endl;
	std::cout << "===  \x1B[33mWrong Polymorphism Test\033[0m  ===" << std::endl;
	std::cout << "=================================" << std::endl;
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1B[32m[Orthodox Collonial Form.]\033[0m" << std::endl;
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1B[32m[Type of Class Called.]\033[0m" << std::endl;
	std::cout << wmeta->getType() << " " << std::endl;
	std::cout << wc->getType() << " " << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1B[32m[Sound.]\033[0m" << std::endl;
	wc->makeSound();   // calls WrongAnimal::makeSound because it's not virtual
	wmeta->makeSound();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1B[32m[Cleanup.]\033[0m" << std::endl;
	delete wmeta;
	delete wc;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;


	
	std::cout << "\n-----------------------------------------------------------\n" << std::endl;
	std::cout << "================================" << std::endl;
	std::cout << "===  \x1B[33mAlternating Array Test\033[0m  ===" << std::endl;
	std::cout << "================================" << std::endl;

	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1B[32m[Orthodox Collonial Form.]\033[0m" << std::endl;
	const Animal* animals[4];
	for (int k = 0; k < 4; ++k)
	{
		if (k % 2 == 0)
			animals[k] = new Dog();
		else
			animals[k] = new Cat();
	}
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1B[32m[Sound.]\033[0m" << std::endl;
	for (int k = 0; k < 4; ++k)
	{
		animals[k]->makeSounds();
	}
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1B[32m[Cleanup.]\033[0m" << std::endl;
	for (int k = 0; k < 4; ++k)
	{
		delete animals[k];
	}
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;


	std::cout << "\n-----------------------------------------------------------\n" << std::endl;
	std::cout << "================================" << std::endl;
	std::cout << "====     \x1B[33mDog Array Test\033[0m     ====" << std::endl;
	std::cout << "================================" << std::endl;
	
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1B[32m[Orthodox Collonial Form.]\033[0m" << std::endl;
	const Animal* dogs[4];
	for (int k = 0; k < 4; ++k)
	{
		dogs[k] = new Dog();
	}
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1B[32m[Sound.]\033[0m" << std::endl;
	for (int k = 0; k < 4; ++k)
	{
		dogs[k]->makeSounds();
	}
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1B[32m[Cleanup.]\033[0m" << std::endl;
	for (int k = 0; k < 4; ++k)
	{
		delete dogs[k];
	}
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;



	std::cout << "\n-----------------------------------------------------------\n" << std::endl;
	std::cout << "================================" << std::endl;
	std::cout << "====     \x1B[33mCat Array Test\033[0m     ====" << std::endl;
	std::cout << "================================" << std::endl;

	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1B[32m[Orthodox Collonial Form.]\033[0m" << std::endl;
	const Animal* cats[4];
	for (int k = 0; k < 4; ++k)
	{
		cats[k] = new Cat();
	}
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1B[32m[Sound.]\033[0m" << std::endl;
	for (int k = 0; k < 4; ++k)
	{
		cats[k]->makeSounds();
	}
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1B[32m[Cleanup.]\033[0m" << std::endl;
	for (int k = 0; k < 4; ++k)
	{
		delete cats[k];
	}
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	return 0;
}
