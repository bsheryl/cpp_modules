#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {

public:

    Dog();
    Dog(const Dog & src);
    ~Dog();

    Dog & operator=(const Dog & src);

    void makeSound() const;
    Brain* getBrain() const;

private:

    Brain* _brain;
};

#endif