
#include <iostream>
#include "Fixed.hpp"

int main()
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    Fixed c(2);
    Fixed d(2.5f);

    std::cout << "Result of multiplication: " << b << std::endl;
    std::cout << "Pre-increment: " << ++a << std::endl;
    std::cout << "Value after pre-increment: " << a << std::endl;
    std::cout << "Post-increment: " << a++ << std::endl;
    std::cout << "Value after post-increment: " << a << std::endl;
    std::cout << "Pre-decrement: " << --a << std::endl;
    std::cout << "Value after pre-decrement: " << a << std::endl;
    std::cout << "Post-decrement: " << a-- << std::endl;
    std::cout << "Value after post-decrement: " << a << std::endl;
    std::cout << "Max of " << a << " and " << b << ": " << Fixed::max(a, b) << std::endl;
    std::cout << "Min of " << a << " and " << b << ": " << Fixed::min(a, b) << std::endl;
    std::cout << "Max of " << c << " and " << d << ": " << Fixed::max(c, d) << std::endl;
    std::cout << "Min of " << c << " and " << d << ": " << Fixed::min(c, d) << std::endl;
    std::cout << "Const Max of " << a << " and " << b << ": " << Fixed::max(a, b) << std::endl;
    std::cout << "Const Min of " << a << " and " << b << ": " << Fixed::min(a, b) << std::endl;
	
    return 0;
}