#include "../header/AMateria.hpp"
AMateria::AMateria()
{
    //std::cout<<"default constructor for abstract materia"<<std::endl;
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
    //std::cout<<"destructor AMateria called"<<std::endl;
}

std::string const& AMateria::getType()const{
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
    
}