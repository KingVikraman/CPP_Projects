#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main() {
    int count = 5;

    std::cout << "\n Creating a zombie horde of " << count << " zombies...\n" << std::endl;

    Zombie* horde = zombieHorde(count, "Hordey");

    for (int i = 0; i < count; i++) {
        horde[i].announce();  // Every zombie announces
    }

    std::cout << "\n Deleting the whole horde...\n" << std::endl;
    delete[] horde;

    return 0;
}
