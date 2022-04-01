#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <string>
#include <iostream>
#include <cmath>
#include <cstdlib>

class Converter {

private:

    std::string _value;
    float _digit;

public:

    Converter(std::string const & value);
    Converter(Converter const & src);
    ~Converter();

    Converter & operator=(Converter const & src);

    char toChar();
    int toInt();
    float toFloat();
    double toDouble();

    class InvalidFormatExeption : public std::exception {

    public:

        const char * what() const throw();
    };

    class ImpossibleExeption : public std::exception {

    public:

        const char * what() const throw();
    };

    class NonDispayableExeption : public std::exception {

    public:

        const char * what() const throw();
    };
};

#endif