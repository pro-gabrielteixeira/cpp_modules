#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = new int(0);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	delete fixedPoint;
}

Fixed::Fixed(const Fixed &fixedCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	fixedPoint = new int(fixedCopy.getRawBits());
}

Fixed& Fixed::operator=(const Fixed &fixedCopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixedCopy)
	{
		delete fixedPoint;
		fixedPoint = new int(fixedCopy.getRawBits());
	}
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (*fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	delete fixedPoint;
	fixedPoint = new int(raw);
}