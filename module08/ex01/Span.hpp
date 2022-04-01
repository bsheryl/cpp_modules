#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <iostream>
#include <vector>
#include <cstdlib>

class Span {

private:

    unsigned int _n;
    std::vector<unsigned int> _vector;

public:

    Span(unsigned int const & n);
    Span(Span const & src);
    ~Span();

    Span & operator=(Span const & src);

    void addNumber(unsigned int const & n);
    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;
    void randomAddNumber();
    void add(std::vector<unsigned int>::iterator start, std::vector<unsigned int>::iterator end);

    class AlreadyExistException : public std::exception {
        const char * what() const throw();
    };

    class FilledException : public std::exception {
        const char * what() const throw();
    };

    class TooLittleVectorException : public std::exception {
        const char * what() const throw();
    };
};

#endif