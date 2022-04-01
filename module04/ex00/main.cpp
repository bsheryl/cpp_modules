#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        std::cout << "==========Right classes==========" << std::endl;
        const Animal *meta = new Animal();
        const Animal *j = new Dog();
        const Animal *i = new Cat();

        std::cout << meta->getType() << " " << std::endl;
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;

        meta->makeSound();
        j->makeSound();
        i->makeSound();

        delete meta;
        delete j;
        delete i;
    }
    {
        std::cout << "\n==========Wrong classes==========" << std::endl;
        const WrongAnimal *meta = new WrongAnimal();
        const WrongAnimal *i = new WrongCat();

        std::cout << meta->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;

        meta->makeSound();
        i->makeSound();

        delete meta;
        delete i;
    }

    return 0;
}