#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

public:

	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed & src);
	~Fixed();

	Fixed & operator=(const Fixed & rhs);

	bool operator>(const Fixed & num);
	bool operator<(const Fixed & num);
	bool operator>=(const Fixed & num);
	bool operator<=(const Fixed & num);
	bool operator==(const Fixed & num);
	bool operator!=(const Fixed & num);

	Fixed operator+(const Fixed & num);
	Fixed operator-(const Fixed & num);
	Fixed operator*(const Fixed & num);
	Fixed operator/(const Fixed & num);

	Fixed & operator++(void);
	Fixed & operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

	int getRawBits() const;
	void setRawBits(const int raw);
	float toFloat(void) const;
	int toInt(void) const;

	static Fixed & min(Fixed & num1, Fixed & num2);
	static Fixed & max(Fixed & num1, Fixed & num2);
	const static Fixed & min(const Fixed & num1, const Fixed & num2);
	const static Fixed & max(const Fixed & num1, const Fixed & num2);

private:

	int _value;
	static const int _fracBits = 8;

};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif