#include <iostream>
#include "Fixed.hpp"

int main(void)
{
     Fixed a;
     Fixed b(a);
     Fixed c;

     c.setRawBits(42);
     b.setRawBits(25);

         std::cout << c.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << "==================================" << std::endl;
     c = b;

         std::cout << c.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;

    // std::cout << a.getRawBits() << std::endl;
    // std::cout << b.getRawBits() << std::endl;
    // std::cout << c.getRawBits() << std::endl;

    return 0;
}

