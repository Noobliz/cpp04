#include "Dog.hpp"

Dog::Dog(){
    this->type = "Dog";
    this->brain = new(std::nothrow) Brain();
    std::cout<<"Dog default constructor called"<<std::endl;

}

Dog::Dog(const Dog &other){
    this->type = other.type;
    this->brain = new(std::nothrow) Brain(*other.brain);
    std::cout<<this->type<<" copy type called"<<std::endl;
}

Dog &Dog::operator=(const Dog &other){
    if (this != &other)
    {
        this->type = other.type;
        delete this->brain;
        this->brain = new(std::nothrow) Brain(*other.brain);
        std::cout<<this->type<<" assignement type called"<<std::endl;
    }
    return *this;
}

void Dog::makeSound() const{
    std::cout<<"WAF"<<std::endl;
}

Dog::~Dog(){
    delete this->brain;
    std::cout<<this->type
    <<" destructor called"<<std::endl;
}

void    Dog::setIdea(const std::string idea, int index){
    if (this->brain)
        this->brain->setIdeas(idea, index);

}

std::string Dog::getIdea(int index)const{
    if (this->brain)
        return this->brain->getIdeas(index);
    return "";
}