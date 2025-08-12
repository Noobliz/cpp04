#include "../header/Ice.hpp"

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

void Ice::use(ICharacter &target)
{
    std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
}