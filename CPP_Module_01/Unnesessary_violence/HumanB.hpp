#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
    private:
        std::string name;
        Weapon* weapon; // Pointer to Weapon object

    public:
        HumanB(std::string name);
        void setWeapon(Weapon& weapon);
        void attack() const;
};

#endif


