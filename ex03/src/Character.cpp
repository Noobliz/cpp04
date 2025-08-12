#include "../header/Character.hpp"
#include "../header/MateriaHandler.hpp"

Character::Character(std::string const &name){
    this->_name = name;
    _NbMateria = 0;
    for (int i = 0; i < 4; i++)
        _Inventory[i] = NULL;
    std::cout<<_name<<" was created"<<std::endl;
}

Character::Character(const Character &other)
{
    this->_name = other._name + ".copy";
    this->_NbMateria = other._NbMateria;
    for (int i = 0; i < 4; i++)
        _Inventory[i] = NULL;
    for (int i = 0; other._Inventory[i] != NULL; i++)
        this->_Inventory[i] = other._Inventory[i]->clone();
    std::cout<<_name<<" was created"<<std::endl;
}

Character &Character::operator=(const Character &other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_NbMateria = other._NbMateria;
        for (int i = 0; _Inventory[i] != NULL; i++)
        {
            delete _Inventory[i];
            _Inventory[i] = NULL;
        }
        for (int i = 0; other._Inventory[i] != NULL; i++)
            this->_Inventory[i] = other._Inventory[i]->clone();
    }
    return (*this);
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if (_Inventory[i] != NULL) {
            delete _Inventory[i];
        }
    }
    std::cout << _name << " was destroyed" << std::endl;
}

void Character::equip(AMateria *m){
    if (m == NULL)
    {
        std::cout<<"object does not exist, impossible to equip"<<std::endl;
        return ;
    }
    if(_NbMateria > 3)
    {
        std::cout<<_name<<"'s inventory full"<<std::endl;
        return ;
    }
    _Inventory[_NbMateria] = m;
    _NbMateria++;
}

void Character::unequip(int idx){
    if (idx >= _NbMateria || idx < 0)
    {
        std::cout<<"no materia was found to unequip"<<std::endl;
        return ;
    }
    MateriaHandler::getInstance().addDroppedMateria(_Inventory[idx]);
    MateriaHandler::getInstance().printMateria();
    _Inventory[idx] = NULL;
    _NbMateria--;
    int i = idx;
    while(i <= _NbMateria)
    {
        _Inventory[i] = _Inventory[i + 1];
        i++;
    }
}

void Character::use(int idx, ICharacter& target)
{
    std::cout<<"nb materia : "<<_NbMateria<<std::endl;
    if (idx < _NbMateria && idx >= 0)
        _Inventory[idx]->use(target);
    else
        std::cout<<_name<<" : nothing was found to use at index "<<idx<<std::endl;
}

void    Character::printMateria()
{
    for(int i = 0; _Inventory[i] != NULL; i++)
    {
        std::cout<<"["<<i<<"]"<<_Inventory[i]->getType()<<std::endl;
    }
}

std::string const & Character::getName() const
{
    return (_name);
}