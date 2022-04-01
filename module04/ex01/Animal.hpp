#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cstring>

class Animal {

public:

    Animal();
    Animal(std::string & type);
    Animal(const Animal & src);
    virtual ~Animal();

    Animal & operator=(const Animal & src);

    virtual void makeSound() const;
    std::string getType() const;

protected:

    std::string _type;
};

#endif