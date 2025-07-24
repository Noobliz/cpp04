#include "Ice.hpp"

Ice::Ice(){
    this->type = "ice";
}

Ice::Ice(std::string const &type)
{
    this->type = "ice";
}

Ice::Ice(const Ice &other)
{
    this->type = "ice";
}
Ice &Ice::operator=(const Ice &other){
    // if (this != &other)
    // {
    //     this->type = other.type;
    // }
    return (*this);
}

Ice::~Ice(){
    std::cout<<"destructor ice called"<<std::endl;
}

Ice* Ice::clone() const
{
    Ice *cloned = new Ice(*this);
    return cloned;
}