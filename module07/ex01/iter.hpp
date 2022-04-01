#include <iostream>
#include <string>

template<typename T>
void printElem(T value) {
    std::cout << value << " ";
}

template<typename T>
void iter(T *array, int size, void (*f)(T)) {
    for (int i = 0; i < size; i++) {
        f(array[i]);
    }
    std::cout << std::endl;
}