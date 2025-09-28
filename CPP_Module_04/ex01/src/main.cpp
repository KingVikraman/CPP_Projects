/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raja <raja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 13:27:45 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/28 16:30:09 by raja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main() {
	std::cout << "=== Array test ===\n";
	const Animal* animals[4];
	for (int i = 0; i < 4; i++) {
		if (i % 2 == 0) animals[i] = new Dog();
		else animals[i] = new Cat();
	}
	for (int i = 0; i < 4; i++) animals[i]->makeSounds();
	for (int i = 0; i < 4; i++) delete animals[i];

	std::cout << "\n=== Deep copy test ===\n";
	Dog d1;
	d1.setBrainIdea(0, "Chase cats");
	Dog d2 = d1; // deep copy

	d1.setBrainIdea(0, "Eat steak");

	d1.showBrainIdea(0); // Eat steak
	d2.showBrainIdea(0); // Chase cats

	return 0;
}

