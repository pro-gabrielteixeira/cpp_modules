#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Constructor called" << std::endl;
}

Fixed::~Fixed()
{
	delete fixedPoint;
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixedCopy)
{
	fixedPoint = new int(*fixedCopy.fixedPoint);
	std::cout << "Copy constructor called" << std::endl;
}