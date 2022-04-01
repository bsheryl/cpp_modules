#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
//    const AAnimal *meta = new AAnimal();
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

//    meta->makeSound();
    j->makeSound();
    i->makeSound();

    delete j;
    delete i;

    return 0;
}