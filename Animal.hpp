#include <iostream>

#pragma once



class Animal{
    protected:
        std::string type;
    public:
        Animal();
        //Animal(const std::string &type);
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType() const;
};

class Dog: public Animal{
    public:
        Dog();
        //Dog(const std::string &type);
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);
        ~Dog();
        void    makeSound() const;

};

class Cat: public Animal{
    public:
        Cat();
        //Cat(const std::string &type);
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);
        ~Cat();
        void    makeSound() const;

};



