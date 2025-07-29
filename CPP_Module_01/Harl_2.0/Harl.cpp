#include "Harl.hpp"

// 🧠 These are the actual messages that get printed:
void Harl::debug() {
    std::cout << "[ DEBUG ]\n"
              << "I love having extra bacon on my burger." << std::endl;
}

void Harl::info() {
    std::cout << "[ INFO ]\n"
              << "I think the cashier gave me a weird look." << std::endl;
}

void Harl::warning() {
    std::cout << "[ WARNING ]\n"
              << "This might lead to a real complaint!" << std::endl;
}

void Harl::error() {
    std::cout << "[ ERROR ]\n"
              << "Manager!! This is unacceptable!" << std::endl;
}

// 🔁 complain method using function pointers
void Harl::complain(std::string level) {
    // Array of function pointers to member methods
    void (Harl::*funcs[4])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    // Array of corresponding level strings
    std::string levels[4] = {
        "DEBUG", "INFO", "WARNING", "ERROR"
    };

    // Find matching level and call the function
    for (int i = 0; i < 4; ++i) {
        if (level == levels[i]) {
            (this->*funcs[i])();  // Call the matching method
            return;
        }
    }

    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
