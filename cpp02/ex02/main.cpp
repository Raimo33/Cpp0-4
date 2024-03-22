
#include <iostream>
#include "Fixed.hpp"

void test_increment(Fixed &a, Fixed &b);
void test_decrement(Fixed &a, Fixed &b);
void test_min(Fixed &a, Fixed &b);
void test_max(Fixed &a, Fixed &b);
void test_compare(Fixed &a, Fixed &b);
void test_add(Fixed &a, Fixed &b);
void test_subtract(Fixed &a, Fixed &b);
void test_divide(Fixed &a, Fixed &b);
void test_multiply(Fixed &a, Fixed &b);

int main()
{
    Fixed a(-3.3f);
	Fixed b(0);

	test_increment(a, b);
	test_decrement(a, b);
	test_min(a, b);
	test_max(a, b);
	test_compare(a, b);
	test_add(a, b);
	test_subtract(a, b);
	test_divide(a, b);
	test_multiply(a, b);

    return 0;
}

void test_multiply(Fixed &a, Fixed &b)
{
	std::cout << ORANGE "a: " << a << ", b: " << b << NC << std::endl;
	std::cout << "a * b: " << a * b << std::endl;
}

void test_divide(Fixed &a, Fixed &b)
{
	std::cout << ORANGE "a: " << a << ", b: " << b << NC << std::endl;
	std::cout << "a / b: " << a / b << std::endl;
}

void test_add(Fixed &a, Fixed &b)
{
	std::cout << ORANGE "a: " << a << ", b: " << b << NC << std::endl;
	std::cout << "a + b: " << a + b << std::endl;
}

void test_subtract(Fixed &a, Fixed &b)
{
	std::cout << ORANGE "a: " << a << ", b: " << b << NC << std::endl;
	std::cout << "a - b: " << a - b << std::endl;
}

void test_compare(Fixed &a, Fixed &b)
{
	std::cout << ORANGE "a: " << a << ", b: " << b << NC << std::endl;
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;
}

void test_increment(Fixed &a, Fixed &b)
{
	std::cout << ORANGE "a: " << a << ", b: " << b << NC << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "++b: " << ++b << std::endl;
}

void test_decrement(Fixed &a, Fixed &b)
{
	std::cout << ORANGE "a: " << a << ", b: " << b << NC << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "--b: " << --b << std::endl;
}

void test_min(Fixed &a, Fixed &b)
{
	const Fixed a_const(a);
	const Fixed b_const(b);

	std::cout << ORANGE "a: " << a << ", b: " << b << NC << std::endl;
	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
	std::cout << "const min(a, b): " << Fixed::min(a_const, b_const) << std::endl;
}

void test_max(Fixed &a, Fixed &b)
{
	const Fixed a_const(a);
	const Fixed b_const(b);

	std::cout << ORANGE "a: " << a << ", b: " << b << NC << std::endl;
	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
	std::cout << "const max(a, b): " << Fixed::max(a_const, b_const) << std::endl;
}



