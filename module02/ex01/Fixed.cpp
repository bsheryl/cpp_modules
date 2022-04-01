#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value) {
	std::cout << "Int consructor called" << std::endl;
	setRawBits(value << this->_fracBits);
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(value * (1 << this->_fracBits)));
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	return this->_value;
}

void Fixed::setRawBits(const int raw) {
	this->_value = raw;
}

float Fixed::toFloat() const {
	return static_cast<float>(getRawBits()) / (1 << this->_fracBits);
}

int Fixed::toInt() const {
	return getRawBits() >> this->_fracBits;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i) {
	o << i.toFloat();
	return o;
}