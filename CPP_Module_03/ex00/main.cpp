#include "ClapTrap.hpp"

int main() {
    std::cout << "\n=== Creating ClapTraps ===\n" << std::endl;
    ClapTrap a("Bot_01");
    ClapTrap b("Bot_02");

    std::cout << "\n=== Basic Attack ===\n" << std::endl;
    a.attack("Bot_02");
    b.takeDamage(0);

    std::cout << "\n=== Taking Damage ===\n" << std::endl;
    b.takeDamage(4);
    b.takeDamage(7); // should die here

    std::cout << "\n=== Repairing ===\n" << std::endl;
    a.beRepaired(5); // should work
    a.takeDamage(3);
    a.beRepaired(3); // repair again

    std::cout << "\n=== Energy Depletion Test ===\n" << std::endl;
    for (int i = 0; i < 10; ++i) {
        a.attack("Dummy");
    }
    a.attack("TooMuch"); // should fail - no energy

    std::cout << "\n=== Dead Bot Behavior ===\n" << std::endl;
    b.attack("Bot_01"); // should fail - 0 HP
    b.beRepaired(10);    // should fail - 0 HP

    std::cout << "\n=== Copy Constructor Test ===\n" << std::endl;
    ClapTrap c = a; // Copy of a

    std::cout << "\n=== Assignment Operator Test ===\n" << std::endl;
    ClapTrap d("NewBot");
    d = a; // Assign a into d

    std::cout << "\n=== Destruction ===\n" << std::endl;
    // All destructors will be called at end of scope

    return 0;
}
