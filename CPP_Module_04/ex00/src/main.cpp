/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 13:27:45 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/27 20:46:44 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main() {
	// std::cout << "\n===================================" << std::endl;
	// std::cout << "===  Correct polymorphism test  ===" << std::endl;
	// std::cout << "===================================\n" << std::endl;
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	// std::cout << meta->getType() << " " << std::endl;
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;

	// std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	// i->makeSounds(); // Cat::makeSound
	// j->makeSounds(); // Dog::makeSound
	// meta->makeSounds(); // Animal::makeSound
	// std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;


	// delete meta;
	// delete j;
	// delete i;
	
	std::cout << "\n=================================" << std::endl;
	std::cout << "===  Wrong polymorphism test  ===" << std::endl;
	std::cout << "=================================" << std::endl;
	std::cout << "\n-----------------------------------------------------------\n" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1B[32m[Orthodox Collonial Form.]\033[0m" << std::endl;
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1B[32m[Type of Class Called.]\033[0m" << std::endl;
	std::cout << wmeta->getType() << " " << std::endl;
	std::cout << wc->getType() << " " << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1B[32m[Sound.]\033[0m" << std::endl;
	wc->makeSound();   // calls WrongAnimal::makeSound because it's not virtual
	wmeta->makeSound();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1B[32m[Cleanup.]\033[0m" << std::endl;
	delete wmeta;
	delete wc;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	// std::cout << "\n================================" << std::endl;
	// std::cout << "===  Alternating array test  ===" << std::endl;
	// std::cout << "================================\n" << std::endl;

	// const Animal* animals[4];
	// for (int k = 0; k < 4; ++k) {
	// 	if (k % 2 == 0) animals[k] = new Dog();
	// 	else animals[k] = new Cat();
	// }
	// std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	// for (int k = 0; k < 4; ++k) {
	// 	animals[k]->makeSounds();
	// }
	// std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;
	// for (int k = 0; k < 4; ++k) {
	// 	delete animals[k];
	// }

	return 0;
}
