#include "Zombie.hpp"

Zombie* newZombie (std::string name);
void randomChump (std::string name);

int main()
{
    std::cout << "\n Creating a heap zombie using newZombie()...\n" << std::endl;

    Zombie* heapZombie = newZombie("Heapster ");
    heapZombie->announce();

    std::cout << "\n Deleting heap zombie...\n" << std::endl;

    std::cout << "\n Creating a stack zombie using randonChump()...\n" << std::endl;
    randomChump("Stacky ");

    std::cout << "\n test completed. All Zombies handled!\n " << std::endl;
    return 0;
}
