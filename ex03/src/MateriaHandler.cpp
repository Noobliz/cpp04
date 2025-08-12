#include "../header/MateriaHandler.hpp"

#include <iostream>

MateriaHandler::MateriaHandler() : _count(0) {
    for (int i = 0; i < 100; i++) {
        _droppedMateria[i] = NULL;
    }
}

MateriaHandler& MateriaHandler::getInstance() {
    //local static (not on stack so not destroyed at end of scope, just at end of program)
    static MateriaHandler instance; 
    return instance;
}

void MateriaHandler::addDroppedMateria(AMateria* materia) {
    if (_count < 100 && materia != NULL) {
        _droppedMateria[_count] = materia;
        _count++;
        std::cout << "Materia stored in handler (total: " << _count << ")" << std::endl;
    }
}

void MateriaHandler::cleanup() {
    for (int i = 0; i < _count; i++) {
        if(_droppedMateria[i] != NULL)
        {
            delete _droppedMateria[i];
            _droppedMateria[i] = NULL;
        }
    }
    _count = 0;
    std::cout << "All dropped materia cleaned up" << std::endl;
}

MateriaHandler::~MateriaHandler() {
    cleanup();
}

void    MateriaHandler::printMateria()
{
    for(int i = 0; _droppedMateria[i] != NULL; i++)
    {
        std::cout<<"Dropped materia["<<i<<"]"<<_droppedMateria[i]->getType()<<std::endl;
    }
}