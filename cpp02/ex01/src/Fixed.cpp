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
	fixedPoint = new int(0);
	*this = fixedCopy;
	// fixedPoint = new int(fixedCopy.getRawBits());
}

Fixed::Fixed(const int convertToFixed)
{
	std::cout << "Int constructor called" << std::endl;
	fixedPoint = new int(convertToFixed << fractionalBits);
}

Fixed::Fixed(const float convertToFixed)
{
	std::cout << "Float constructor called" << std::endl;
	fixedPoint = new int(roundf(convertToFixed * (1 << fractionalBits)));
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
	return (*fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	delete fixedPoint;
	fixedPoint = new int(raw);
}

float Fixed::toFloat(void) const 
{
	return ((float)*fixedPoint / (float)(1 << fractionalBits));
}

int Fixed::toInt(void) const 
{
	return (*fixedPoint >> fractionalBits);
}

std::ostream& operator << (std::ostream& stream, const Fixed& f)
{
	stream << f.toFloat();
	return (stream);
}