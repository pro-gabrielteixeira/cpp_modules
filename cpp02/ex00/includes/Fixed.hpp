#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class Fixed
{
private:
	int *fixedPoint;
	static const int literalNumber = 8;
public:
	Fixed();
	Fixed(const Fixed& fixedCopy);
	~Fixed();
};

#endif