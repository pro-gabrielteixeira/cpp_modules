#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
private:
	int *fixedPoint;
	static const int fractionalBits = 8;
public:
	Fixed();
	Fixed(const int convertToFixed);
	Fixed(const float convertToFixed);
	Fixed(const Fixed& fixedCopy);
	Fixed& operator=(const Fixed& fixedCopy);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	friend std::ostream& operator << (std::ostream& stream, const Fixed& f);
};


#endif