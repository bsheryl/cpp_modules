#include "Array.hpp"

template<typename T>
Array<T>::Array() : _array(new T[0]), _size(0) {

};

template<typename T>
Array<T>::Array(unsigned const int & n) : _array(new T[n]), _size(n) {

}

template<typename T>
Array<T>::Array(Array<T> const &src) {
    this->_size = src._size;
    this->_array = new T[src._size];
    for (int i = 0; i < this->_size; i++) {
        this->_array[i] = src._array[i];
    }
}

template<typename T>
Array<T>::~Array() {
    delete[] this->_array;
}

template<typename T>
Array<T> & Array<T>::operator=(Array<T> const & src) {
    if (this == &src)
        return *this;
    this->_size = src._size;
    this->_array = new T[src._size];
    for (int i = 0; i < this->_size; i++) {
        this->_array[i] = src._array[i];
    }
    return *this;
}

template<typename T>
T & Array<T>::operator[](int index) {
    if (index < 0 || index >= this->_size)
    {
        throw std::out_of_range("Index out of range");
    }
    return this->_array[index];
}

template<typename T>
T const Array<T>::operator[](int index) const {
    if (index < 0 || index >= this->_size)
    {
        std::cout << 1 << std::endl;
        throw std::out_of_range("Index out of range");
    }
    return this->_array[index];
}

template<typename T>
int Array<T>::size() const {
    return this->_size;
}