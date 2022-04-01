#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#define NUMBER_SLOTS 4

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {

private:

    std::string _name;
    AMateria* _slots[NUMBER_SLOTS];

public:

    Character();
    Character(std::string const & name);
    Character(Character const & src);
    ~Character();

    Character & operator=(Character const & src);

    std::string const & getName() const;
    void equip(AMateria * m);
    void unequip(int idx);
    void use(int idx, ICharacter & target);
};

#endif