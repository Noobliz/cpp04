#include "ICharacter.hpp"

Character::Character(std::string const name){
    this->_name = name;
    _NbMateria = 0;
}

void Character::equip(AMateria *m){
    if(_NbMateria >= 3)
    {
        std::cout<<"inventory full"<<std::endl;
        return ;
    }
    _Inventory[_NbMateria] = m;
    _NbMateria++;
}

void Character::unequip(int idx){
    if (idx > _NbMateria)
    {
        std::cout<<"no materia was found"<<std::endl;
        return ;
    }
    AMateria *tmp;
    AMateria *newIventory[4];
    for(int i = 0; i <= _NbMateria; i++)
    {
        if (idx != i)
        {
            newIventory[i] = _Inventory[i];
        }
    }
    tmp = _Inventory[idx];
}