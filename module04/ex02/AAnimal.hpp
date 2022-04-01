#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <cstring>

class AAnimal {

public:

    AAnimal();
    AAnimal(std::string & type);
    AAnimal(const AAnimal & src);
    virtual ~AAnimal();

    AAnimal & operator=(const AAnimal & src);

    virtual void makeSound() const = 0;
    std::string getType() const;

protected:

    std::string _type;
};

#endif