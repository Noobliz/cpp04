#include "AMateria.hpp"

AMateria::AMateria(){
    type = "default";
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
}
AMateria::AMateria(const AMateria& other)
{
    this->type = other.type;
}

AMateria &AMateria::operator=(const AMateria &other){
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

AMateria::~AMateria(){
    std::cout<<"destructor AMateria called"<<std::endl;
}

std::string const& AMateria::getType()const{
    return (this->type);
}

AMateria* AMateria::clone()const{

}