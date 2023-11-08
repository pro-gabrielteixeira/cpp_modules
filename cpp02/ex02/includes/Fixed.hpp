#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
private:
	int fixedPoint;
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

	// Comparison Operators
	bool operator > (const Fixed& fixedCopy) const;
	bool operator < (const Fixed& fixedCopy) const;
	bool operator >= (const Fixed& fixedCopy) const;
	bool operator <= (const Fixed& fixedCopy) const;
	bool operator == (const Fixed& fixedCopy) const;
	bool operator != (const Fixed& fixedCopy) const;

	// Arithmetic Operators
	float operator + (const Fixed& fixedCopy) const;
	float operator - (const Fixed& fixedCopy) const;
	float operator * (const Fixed& fixedCopy) const;
	float operator / (const Fixed& fixedCopy) const;

	// Increment/Decrement Operators
	Fixed& operator ++ (void);
	Fixed operator ++ (int);
	Fixed& operator -- (void);
	Fixed operator -- (int);

	// MIN and MAX member functions
	static Fixed& min(Fixed& a, Fixed &b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed &b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
};


#endif