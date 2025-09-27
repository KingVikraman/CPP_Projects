#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType() << " Makes: ";
	dog->makeSound();

	std::cout << cat->getType() << " Makes: ";
	cat->makeSound();

	std::cout << meta->getType() << " Makes: ";
	meta->makeSound();

	delete meta;
	delete dog;
	delete cat;

	return 0;
}
