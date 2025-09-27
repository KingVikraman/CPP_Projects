/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 13:27:45 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/26 13:27:56 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main() {
    std::cout << "=== Correct polymorphism test ===\n";
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSounds(); // Cat::makeSound
    j->makeSounds(); // Dog::makeSound
    meta->makeSounds(); // Animal::makeSound

    delete meta;
    delete j;
    delete i;

    std::cout << "\n=== Wrong polymorphism test ===\n";
    const WrongAnimal* wmeta = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();

    wc->makeSound();   // calls WrongAnimal::makeSound because it's not virtual
    wmeta->makeSound();

    delete wmeta;
    delete wc;

    std::cout << "\n=== Array test ===\n";
    const Animal* animals[4];
    for (int k = 0; k < 4; ++k) {
        if (k % 2 == 0) animals[k] = new Dog();
        else animals[k] = new Cat();
    }
    for (int k = 0; k < 4; ++k) {
        animals[k]->makeSounds();
    }
    for (int k = 0; k < 4; ++k) {
        delete animals[k];
    }

    return 0;
}
