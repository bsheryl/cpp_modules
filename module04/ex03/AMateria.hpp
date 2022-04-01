#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <cstring>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {

protected:

    std::string _type;

public:

    AMateria();
    AMateria(std::string const & type);
    AMateria(AMateria const & src);
    virtual ~AMateria();

    AMateria const & operator=(AMateria const & src);

    std::string const & getType() const;

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter & target);
};

#endif