
#pragma once

#include <iostream>

class AMateria
{
    protected:
    std::string type;

    public:
        AMateria();
        AMateria(std::string const &type);
        AMateria(const AMateria &other);
        AMateria &operator=(const AMateria &other);
        virtual ~AMateria();

        std::string const& getType()const;
        virtual AMateria* clone()const = 0;
        //virtual void use(Icharacter& target);
};