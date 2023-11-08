#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class Fixed
{
private:
	int *fixedPoint;
	static const int fractionalBits = 8;
public:
	Fixed();
	Fixed(const Fixed& fixedCopy);
	Fixed& operator=(const Fixed& fixedCopy);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits( int const raw);
};

#endif