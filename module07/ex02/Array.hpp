#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>

template<typename T>
class Array {

private:
    T *_array;
    int _size;

public:
    Array();
    Array(unsigned const int & n);
    Array(Array<T> const & src);

    ~Array();

    Array<T> & operator=(Array<T> const & src);
    T & operator[](int index);
    T const operator[](int index) const;

    int size() const;
};

#include "Array.tpp"

#endif