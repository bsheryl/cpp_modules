#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <cstring>

class WrongAnimal {

public:

    WrongAnimal();
    WrongAnimal(std::string & type);
    WrongAnimal(const WrongAnimal & src);
    ~WrongAnimal();

    WrongAnimal & operator=(const WrongAnimal & src);

    void makeSound() const;
    std::string getType() const;

protected:

    std::string _type;
};

#endif