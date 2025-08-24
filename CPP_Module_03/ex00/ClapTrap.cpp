#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
	: name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
	{
		std::cout << 
		"ClapTrap " << name <<
		" constructed (default)." <<
		std::endl;
	}

ClapTrap::ClapTrap(const std::string& name)
	: name(name), hitPoints(10), energyPoints(10), attackDamage(0)
	{
		std::cout <<
		"ClapTrap " << name <<
		" constructed. " << 
		std::endl;
	}

ClapTrap::ClapTrap(const ClapTrap& other)
	:name(other.name), hitPoints(other.hitPoints),
	energyPoints(other.energyPoints), attackDamage(other.attackDamage)
	{
		std::cout << "ClapTrap " <<
		name << " copied." << std::endl;
	}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	std::cout << "ClapTrap assingnment operator called for " <<
	name << "." << std::endl;
	return *this;
}


ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap "
	<< name << " destroyed." << 
	std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (hitPoints <= 0)
	{
        std::cout << "ClapTrap " << 
		name << " can't attack (no HP)." << 
		std::endl;
        return;
    }
    if (energyPoints <= 0)
	{
        std::cout << "ClapTrap " << 
		name << " can't attack (no energy)." << 
		std::endl;
        return;
    }

    energyPoints--;
    std::cout << "ClapTrap " << 
	name << " attacks " << target
    << ", causing " << attackDamage
	<< " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints <= 0)
	{
        std::cout << "ClapTrap " << 
		name << " is already out of HP." << 
		std::endl;
        return;
    }

    hitPoints -= amount;
    if (hitPoints < 0)
        hitPoints = 0;

    std::cout << "ClapTrap " << name 
	<< " takes " << amount << " points of damage!" 
	<< std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints <= 0)
	{
        std::cout << "ClapTrap " << name << " can't repair (no HP)." << std::endl;
        return;
    }
    if (energyPoints <= 0)
	{
        std::cout << "ClapTrap " << name << " can't repair (no energy)." << std::endl;
        return;
    }

    energyPoints--;
    hitPoints += amount;

    std::cout << "ClapTrap " <<
	name << " repairs itself for " <<
	amount << " hit points!" <<
	std::endl;
}