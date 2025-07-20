
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"


int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    //const Animal* tmp;
    //tmp = i;
    //i = j;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    delete j;
    //delete tmp;
    //-----------------------wrongAnimal
    std::cout<<"------WRONG ANIMAL TESTS-------"<<std::endl;
    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* x = new WrongCat();

    std::cout << x->getType() << " " << std::endl;
    x->makeSound();
    meta2->makeSound();
    delete meta2;
    delete x;
    return 0;
}