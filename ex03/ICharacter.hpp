#pragma once
#include <iostream>
#include "AMateria.hpp"

class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

class Character: public ICharacter{
    private:
        std::string _name;
        AMateria *_Inventory[4];
        int _NbMateria;
    public:
        Character();
        Character(std::string const name);
        Character(const Character &other);
        Character &operator=(const Character &other);
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};