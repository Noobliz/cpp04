#include "Animal.hpp"

Animal::Animal():type("living creature"){
    std::cout<<"Animal default constructor called"<<std::endl;

}

// Animal::Animal(const std::string &type){
//     this->type = type;
//     std::cout<<"Animal constructor type called"<<std::endl;
// }

Animal::Animal(const Animal &other){
    this->type = other.type;
    std::cout<<"Animal copy constructor called"<<std::endl;
}

Animal &Animal::operator=(const Animal &other){
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout<<"Animal assignment operator called"<<std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout<<"destructor called"<<std::endl;
}
std::string Animal::getType() const{
    return (type);
}

void Animal::makeSound() const{
    std::cout<<"silence\n";
}
//-----DOG

Dog::Dog(){
    this->type = "Dog";
    std::cout<<"Dog default constructor called"<<std::endl;

}

// Dog::Dog(const std::string &type){
//     this->type = "Dog";
//     std::cout<<this->type<<" constructor type called"<<std::endl;
// }

Dog::Dog(const Dog &other){
    this->type = other.type;
    std::cout<<this->type<<" copy type called"<<std::endl;
}

Dog &Dog::operator=(const Dog &other){
    if (this != &other)
    {
        this->type = other.type;
        std::cout<<this->type<<" assignement type called"<<std::endl;
    }
    return *this;
}

void Dog::makeSound() const{
    std::cout<<"WAF"<<std::endl;
}

Dog::~Dog(){
    std::cout<<this->type
    <<" destructor called"<<std::endl;
}

//----CAT

Cat::Cat(){
    this->type = "Cat";
    std::cout<<"Cat default constructor called"<<std::endl;

}

Cat::Cat(const Cat &other){
    this->type = other.type;
    std::cout<<this->type<<" copy type called"<<std::endl;
}

Cat &Cat::operator=(const Cat &other){
    if (this != &other)
    {
        this->type = other.type;
        std::cout<<this->type<<" assignement type called"<<std::endl;
    }
    return *this;
}

Cat::~Cat(){
    std::cout<<this->type
    <<" destructor called"<<std::endl;
}

void Cat::makeSound() const{
    std::cout<<"MEOW"<<std::endl;
}

//------------WrongAnimal



int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Animal* tmp;
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

    return 0;
}