#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

public:

    Cat();
    Cat(const Cat & src);
    ~Cat();

    Cat & operator=(const Cat & src);

    void makeSound() const;
    Brain* getBrain() const;

private:

    Brain* _brain;

};

#endif