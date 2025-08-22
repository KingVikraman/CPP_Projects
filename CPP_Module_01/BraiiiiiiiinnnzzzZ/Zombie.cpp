#include "Zombie.hpp"


Zombie::Zombie(std::string name)
{
    this->name = name;
     std::cout << "Zombie " << this->name << "has risen from the grave! " << std::endl;
}
Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << "has been destroyed " << std::endl;
}

void Zombie::announce() const
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

