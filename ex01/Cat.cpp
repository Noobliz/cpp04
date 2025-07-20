
#include "Cat.hpp"

Cat::Cat(){
    this->type = "Cat";
    this->brain = new(std::nothrow) Brain();
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
        delete this->brain;
        this->brain = new Brain(*other.brain);
        std::cout<<this->type<<" assignement type called"<<std::endl;
    }
    return *this;
}

Cat::~Cat(){
    delete this->brain;
    std::cout<<this->type
    <<" destructor called"<<std::endl;
}

void Cat::makeSound() const{
    std::cout<<"MEOW"<<std::endl;
}

void    Cat::setIdea(const std::string idea, int index){
    if (this->brain)
        this->brain->setIdeas(idea, index);

}

std::string Cat::getIdea(int index)const{
    if (this->brain)
        return this->brain->getIdeas(index);
    return "";
}