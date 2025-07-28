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
    //AMateria *newIventory;
    tmp = _Inventory[idx];
    _Inventory[idx] = 0;
    int i = 0;
    while(i < _NbMateria)
    {
        _Inventory[idx + i] = _Inventory[i + 1];
        i--;
    }
    _NbMateria--;
}