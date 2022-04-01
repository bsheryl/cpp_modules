#include "Data.hpp"

int main() {

    Data data = {"C++", 6, 1};
    uintptr_t ptr;

    std::cout << data.language << ", module " << data.module
        << ", exersice " << data.exercise << std::endl;

    ptr = serialize(&data);

    Data *data1 = deserialize(ptr);

    std::cout << data1->language << ", module " << data1->module
        << ", exersice " << data1->exercise << std::endl;

    return 0;
}