#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixedCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	fixedPoint =0;
	*this = fixedCopy;
}

Fixed::Fixed(const int convertToFixed)
{
	std::cout << "Int constructor called" << std::endl;
	fixedPoint = (convertToFixed << fractionalBits);
}

Fixed::Fixed(const float convertToFixed)
{
	std::cout << "Float constructor called" << std::endl;
	fixedPoint = (roundf(convertToFixed * (1 << fractionalBits)));
}

Fixed& Fixed::operator=(const Fixed &fixedCopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &fixedCopy)
	{
		fixedPoint = fixedCopy.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	fixedPoint = raw;
}

float Fixed::toFloat(void) const 
{
	return ((float)fixedPoint / (float)(1 << fractionalBits));
}

int Fixed::toInt(void) const 
{
	return (fixedPoint >> fractionalBits);
}

std::ostream& operator << (std::ostream& stream, const Fixed& f)
{
	stream << f.toFloat();
	return (stream);
}

bool Fixed::operator > (const Fixed& fixedCopy) const
{
	return (this->fixedPoint > fixedCopy.fixedPoint);
}

bool Fixed::operator < (const Fixed& fixedCopy) const
{
	return (this->fixedPoint < fixedCopy.fixedPoint);
}

bool Fixed::operator >= (const Fixed& fixedCopy) const
{
	return (this->fixedPoint >= fixedCopy.fixedPoint);
}

bool Fixed::operator <= (const Fixed& fixedCopy) const
{
	return (this->fixedPoint <= fixedCopy.fixedPoint);
}

bool Fixed::operator == (const Fixed& fixedCopy) const
{
	return (this->fixedPoint == fixedCopy.fixedPoint);
}

bool Fixed::operator != (const Fixed& fixedCopy) const
{
	return (this->fixedPoint != fixedCopy.fixedPoint);
}

float Fixed::operator + (const Fixed& fixedCopy) const
{
	return (this->toFloat() + fixedCopy.toFloat());
}

float Fixed::operator - (const Fixed& fixedCopy) const
{
	return (this->toFloat() - fixedCopy.toFloat());
}

float Fixed::operator * (const Fixed& fixedCopy) const
{
	return (this->toFloat() * fixedCopy.toFloat());
}

float Fixed::operator / (const Fixed& fixedCopy) const
{
	return (this->toFloat() / fixedCopy.toFloat());
}

Fixed& Fixed::operator ++ (void)
{
	fixedPoint++;
	return *(this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed tmp(*this);
	fixedPoint++;
	return (tmp);
}

Fixed& Fixed::operator -- (void)
{
	fixedPoint--;
	return *(this);
}

Fixed Fixed::operator -- (int)
{
	Fixed tmp(*this);
	fixedPoint--;
	return (tmp);
}

Fixed& Fixed::min(Fixed& a, Fixed &b)
{
	return (a.fixedPoint > b.fixedPoint) ? b : a;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a.fixedPoint > b.fixedPoint) ? b : a;
}

Fixed& Fixed::max(Fixed& a, Fixed &b)
{
	return (a.fixedPoint > b.fixedPoint) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a.fixedPoint > b.fixedPoint) ? a : b;
}