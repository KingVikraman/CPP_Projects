#include <iostream>
#include <string>

int main() {
    std::string brain = "HI THIS IS BRAIN";

    std::string* stringPTR = &brain;     // pointer to the string
    std::string& stringREF = brain;      // reference to the string

    std::cout << " Memory Addresses:" << std::endl;
    std::cout << "Address of brain      : " << &brain << std::endl;
    std::cout << "Address held by PTR   : " << stringPTR << std::endl;
    std::cout << "Address held by REF   : " << &stringREF << std::endl;

    std::cout << "\n Values:" << std::endl;
    std::cout << "Value of brain        : " << brain << std::endl;
    std::cout << "Value pointed to by PTR : " << *stringPTR << std::endl;
    std::cout << "Value via REF         : " << stringREF << std::endl;

    return 0;
}
