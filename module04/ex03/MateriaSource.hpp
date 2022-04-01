#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

#define NUMBER_OF_MATERIAS 4

class MateriaSource : public IMateriaSource {

private:

    AMateria* _materias[NUMBER_OF_MATERIAS];

public:

    MateriaSource();
    MateriaSource(MateriaSource const & src);
    ~MateriaSource();

    MateriaSource & operator=(MateriaSource const & src);

    void learnMateria(AMateria *m);
    AMateria * createMateria(std::string const & type);
};

#endif