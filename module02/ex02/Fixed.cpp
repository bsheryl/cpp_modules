#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int  value) {
//	std::cout << "Int constructor called" << std::endl;
	setRawBits(value << this->_fracBits);
}

Fixed::Fixed( float value) {
//	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(value * (1 << this->_fracBits)));
}

Fixed::Fixed(const Fixed & src) {
//	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed() {
//	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed & rhs) {
//	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed &num) {
	return this->getRawBits() > num.getRawBits();
}

bool Fixed::operator<(const Fixed &num) {
	return this->getRawBits() < num.getRawBits();
}

bool Fixed::operator>=(const Fixed &num) {
	return this->getRawBits() >= num.getRawBits();
}

bool Fixed::operator<=(const Fixed &num) {
	return this->getRawBits() <= num.getRawBits();
}

bool Fixed::operator==(const Fixed &num) {
	return this->getRawBits() == num.getRawBits();
}

bool Fixed::operator!=(const Fixed &num) {
	return this->getRawBits() != num.getRawBits();
}

Fixed Fixed::operator+(const Fixed &num) {
	Fixed tmp;
	tmp.setRawBits(this->getRawBits() + num.getRawBits());
	return tmp;
}

Fixed Fixed::operator-(const Fixed &num) {
	Fixed tmp;
	tmp.setRawBits(this->getRawBits() - num.getRawBits());
	return tmp;
}

Fixed Fixed::operator*(const Fixed &num) {
	Fixed tmp;
	tmp.setRawBits(this->getRawBits() * num.getRawBits() / (1 << this->_fracBits));
	return tmp;
}

Fixed Fixed::operator/(const Fixed &num) {
	Fixed tmp;
	tmp.setRawBits((1 << this->_fracBits) * this->getRawBits() / num.getRawBits());
	return tmp;
}

Fixed & Fixed::operator++() {
	this->_value++;
	return *this;
}

Fixed & Fixed::operator--() {
	this->_value--;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	tmp.setRawBits(this->_value++);
	return tmp;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	tmp.setRawBits(this->_value--);
	return tmp;
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

Fixed & Fixed::min(Fixed & num1, Fixed & num2) {
	return (num1 < num2) ? num1 : num2;
}

Fixed & Fixed::max(Fixed & num1, Fixed & num2) {
	return (num1 > num2) ? num1 : num2;
}

const Fixed & Fixed::min(const Fixed & num1, const Fixed & num2) {
	return (static_cast<Fixed>(num1) < static_cast<Fixed>(num2)) ? num1 : num2;
}

const Fixed & Fixed::max(const Fixed & num1, const Fixed & num2) {
	return (static_cast<Fixed>(num1) > static_cast<Fixed>(num2)) ? num1 : num2;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i) {
	o << i.toFloat();
	return o;
}