#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

class FailFindException : public std::exception {
    const char * what() const throw() {
        return "Element has not found";
    }
};

template<typename T>
typename T::iterator easyfind(T & container, int value) {
    typename T::iterator res = std::find(container.begin(), container.end(), value);
    if (res == container.end())
        throw FailFindException();
    return res;
}

#endif