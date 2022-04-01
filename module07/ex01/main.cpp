#include "iter.hpp"

int main() {
    std::cout << "int : ";
    int ints[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    iter(ints, 4, printElem);
    std::cout << "string : ";
    std::string strs[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    iter(strs, 6, printElem);
    std::cout << "float : ";
    float floats[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    iter(floats, 8, printElem);
}