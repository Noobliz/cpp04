
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("Wrong living creature"){
    std::cout<<"Wrong Animal default constructor called"<<std::endl;

}

WrongAnimal::WrongAnimal(const WrongAnimal &other){
    this->type = other.type;
    std::cout<<"WrongAnimal copy constructor called"<<std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout<<"WrongAnimal assignment operator called"<<std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<"destructor called"<<std::endl;
}

std::string WrongAnimal::getType() const{
    return (type);
}

void WrongAnimal::makeSound() const{
    std::cout<<this->type<<" screams : Wrong BOAAAR\n";
}

//--------wrong CAT

WrongCat::WrongCat(){
    this->type = "WrongCat";
    std::cout<<"WrongCat default constructor called"<<std::endl;

}

WrongCat::WrongCat(const WrongCat &other){
    this->type = other.type;
    std::cout<<this->type<<" copy type called"<<std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other){
    if (this != &other)
    {
        this->type = other.type;
        std::cout<<this->type<<" assignement type called"<<std::endl;
    }
    return *this;
}

WrongCat::~WrongCat(){
    std::cout<<this->type
    <<" destructor called"<<std::endl;
}

void WrongCat::makeSound() const{
    std::cout<<"Wrong Meow"<<std::endl;
}

