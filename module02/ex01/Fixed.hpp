#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

public:

	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &src);
	~Fixed();

	Fixed & operator=(const Fixed & rhs);

	int getRawBits() const;
	void setRawBits(const int raw);
	float toFloat(void) const;
	int toInt(void) const;

private:

	int _value;
	static const int _fracBits = 8;

};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif