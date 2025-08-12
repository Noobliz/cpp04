#include "../header/AMateria.hpp"
#include "../header/Ice.hpp"
#include "../header/Cure.hpp"
#include "../header/Character.hpp"
#include "../header/MateriaSource.hpp"

// int main()
// {
//     Character me("me");
//     Character other("other");
//     AMateria *one = new Ice();
//     AMateria *two = new Ice();
//     me.equip(one);
//     me.equip(two);
//     me.unequip(0);
//     me.use(1, other); //try use inexistant materia

//     other.printMateria();
//     me.printMateria();

// }

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->unequip(1);//stocked in materiaHandler

    ICharacter* bob = new Character("bob");
    src->learnMateria(new Ice);
    bob->equip(src->createMateria("ice"));
    bob->equip(src->createMateria("ice"));
    bob->unequip(0);//stocked in materiaHandler

    me->use(0, *bob);
    me->use(1, *bob);//no more materia here
    delete bob;
    delete me;
    delete src;
}