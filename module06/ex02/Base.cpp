#include "Base.hpp"

Base::~Base() {}

Base * generate() {
    std::srand(time(NULL));
    int value =  std::rand() % 3;
    std::cout << "Created class ";
    switch (value) {
        case 0:
            std::cout << "A" << std::endl;
            return new A();
        case 1:
            std::cout << "B" << std::endl;
            return new B();
        case 2:
            std::cout << "C" << std::endl;
            return new C();
    }
    std::cout << "unknown" << std::endl;
    return nullptr;
}

void identify(Base * p) {
    if (p == nullptr) {
        std::cout << "nullptr" << std::endl;
        return;
    }
    std::cout << "Identified class: ";
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "unknown" << std::endl;
}

void identify(Base & p) {
    std::cout << "Identified class: ";
    try {
        Base base = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        return;
    } catch (std::exception &exception) {}
    try {
        Base base = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        return;
    } catch (std::exception &exception) {}
    try {
        Base base = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        return;
    } catch (std::exception &exception) {}
}