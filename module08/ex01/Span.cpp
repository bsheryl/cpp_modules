#include "Span.hpp"

Span::Span(unsigned int const & n) : _n(n), _vector() {
}

Span::Span(const Span &src) {
    *this = src;
}

Span::~Span() {
//    std::vector<unsigned int>::const_iterator iter;
//    for (iter = this->_vector.begin(); iter != this->_vector.end(); ++iter) {
//        std::cout << *iter << std::endl;
//    }
}

Span & Span::operator=(const Span &src) {
    if (this == &src)
        return *this;
    std::vector<unsigned int>::const_iterator iter;
    for (iter = src._vector.begin(); iter != src._vector.end(); ++iter) {
        this->_vector.push_back(*iter);
    }
    return *this;
}

void Span::addNumber(unsigned int const &n) {
    if (this->_vector.size() == this->_n) {
        throw Span::FilledException();
    }
    if (this->_vector.size() != 0) {
        std::vector<unsigned int>::const_iterator res = std::find(this->_vector.begin(), this->_vector.end(), n);
        if (*res == n) {
            throw Span::AlreadyExistException();
        }
    }
    this->_vector.push_back(n);
}

unsigned int Span::shortestSpan() const {
    if (this->_vector.size() < 2)
        throw Span::TooLittleVectorException();
    unsigned int res = UINT_MAX;
    std::vector<unsigned int>::const_iterator iter1;
    std::vector<unsigned int>::const_iterator iter2;
    unsigned int i = 0;
    for (iter1 = this->_vector.begin(); iter1 != this->_vector.end(); ++iter1) {
        for (iter2 = this->_vector.begin() + i + 1; iter2 != this->_vector.end(); ++iter2) {
            if (iter1 == this->_vector.end())
                break;
            unsigned tmp = static_cast<unsigned int>(abs(static_cast<long>(*iter1) - static_cast<long>(*iter2)));
            if (tmp == 0) {
                continue;
            }
            if (tmp < res) {
                res = tmp;
            }
        }
        i++;
    }
    return res;
}

unsigned int Span::longestSpan() const {
    if (this->_vector.size() < 2)
        throw Span::TooLittleVectorException();
    unsigned int res = 0;
    std::vector<unsigned int>::const_iterator iter1;
    std::vector<unsigned int>::const_iterator iter2;
    unsigned int i = 0;
    for (iter1 = this->_vector.begin(); iter1 != this->_vector.end(); ++iter1) {
        for (iter2 = this->_vector.begin() + i; iter2 != this->_vector.end(); ++iter2) {
            unsigned tmp = static_cast<unsigned int>(abs(static_cast<long>(*iter1) - static_cast<long>(*iter2)));
            if (tmp == 0)
                continue;
            if (tmp > res) {
                res = tmp;
            }
        }
        i++;
    }
    return res;
}

void Span::randomAddNumber() {
    srand(time(NULL));
    for (unsigned int i = 0; i < this->_n; i++) {
        try {
            this->addNumber(rand() % UINT_MAX);
        } catch (std::exception & exception) {
            i--;
        }
    }
    std::cout << "Vector is fulled. He has size = " << this->_vector.size() << std::endl;
}

void Span::add(std::vector<unsigned int>::iterator start, std::vector<unsigned int>::iterator end) {
    std::vector<unsigned int>::const_iterator iter;
    for (iter = start; iter != end; ++iter) {
        this->addNumber(*iter);
    }
}

const char * Span::AlreadyExistException::what() const throw() {
    return "This element already exist";
}

const char * Span::FilledException::what() const throw() {
    return "The span is filled";
}

const char * Span::TooLittleVectorException::what() const throw() {
    return "Too little vector";
}