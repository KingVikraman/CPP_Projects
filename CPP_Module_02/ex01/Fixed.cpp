#include "Fixed.hpp"
#include <cmath>  // for the use of rounding off


// Default
Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Int constructor
Fixed::Fixed(const int n) {
    std::cout << "Int constructor called" << std::endl;
    _value = n << _fractionalBits;
}

// Float constructor
Fixed::Fixed(const float f) {
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(f * (1 << _fractionalBits));
}

// Copy constructor
Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    _value = other._value;
}

// Assignment
Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        _value = other._value;
    return *this;
}

// Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

// Raw bits
int Fixed::getRawBits(void) const {
    return _value;
}

void Fixed::setRawBits(int const raw) {
    _value = raw;
}

// Convert back to float
float Fixed::toFloat(void) const {
    return (float)_value / (1 << _fractionalBits);
}

// Convert back to int
int Fixed::toInt(void) const {
    return _value >> _fractionalBits;
}

// Output as float
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
