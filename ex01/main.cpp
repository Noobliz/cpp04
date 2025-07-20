#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
    int nbAnimals = 6;
    Animal *animals[nbAnimals];


	std::cout << "\n--- [ Constructors Dogs] ---\n" << std::endl;

	for (int i = 0; i < nbAnimals / 2; ++i)
		animals[i] = new Dog();

	std::cout << "\n--- [ Constructors Cats] ---\n" << std::endl;

	for (int i = nbAnimals / 2; i < nbAnimals; ++i)
		animals[i] = new Cat();

    std::cout << "\n--- [ tests Dogs by copy ] ---\n" << std::endl;
    Dog basicDog;
    basicDog.setIdea("I want to eat my poop", 0);

    Dog copyDog (basicDog);

    std::cout << "Original idea of basicDog: " << basicDog.getIdea(0) << std::endl;
    std::cout << "Copied idea in copyDog: " << copyDog.getIdea(0) << std::endl;

    copyDog.setIdea("I want to dig a hole", 0);
    std::cout << "After modification, basicDog idea: " << basicDog.getIdea(0) << std::endl;
    std::cout << "After modification, copyDog idea: " << copyDog.getIdea(0) << std::endl;


    
    for (int i = 0; i < nbAnimals; i++)
        delete animals[i];

    return (0);
}