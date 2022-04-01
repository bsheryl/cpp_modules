#include "Converter.hpp"

Converter::Converter(const std::string & value) : _value(value) {
    try {
        this->_digit = std::stof(this->_value);
    } catch (std::exception & exception) {
        throw Converter::InvalidFormatExeption();
    }
}

Converter::Converter(const Converter &src) {
    this->_value = src._value;
    this->_digit = src._digit;
}

Converter::~Converter() {}

Converter & Converter::operator=(const Converter &src) {
    if (this != &src) {
        this->_value = src._value;
        this->_digit = src._digit;
    }
    return *this;
}

char Converter::toChar() {
    char value = static_cast<char>(this->_digit);
    if (this->_digit == std::numeric_limits<float>::infinity()
        || this->_digit == -std::numeric_limits<float>::infinity() || std::isnan(this->_digit)) {
        throw Converter::ImpossibleExeption();
    }
    if (value < 32 || value > 126)
        throw Converter::NonDispayableExeption();
    std::cout << "'";
    return value;
}

int Converter::toInt() {
    if (this->_digit == std::numeric_limits<float>::infinity()
    || this->_digit == -std::numeric_limits<float>::infinity() || std::isnan(this->_digit)) {
        throw Converter::ImpossibleExeption();
    }
    return static_cast<int>(this->_digit);
}

float Converter::toFloat() {
    return static_cast<float>(this->_digit);
}

double Converter::toDouble() {
    return static_cast<double>(this->_digit);
}

const char * Converter::InvalidFormatExeption::what() const throw() {
    return "Invalid format";
}

const char * Converter::ImpossibleExeption::what() const throw() {
    return "impossible";
}

const char * Converter::NonDispayableExeption::what() const throw() {
    return "Non displayable";
}