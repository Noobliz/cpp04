#pragma once

#include "AMateria.hpp"

class MateriaHandler {
private:
    AMateria* _droppedMateria[100];
    int _count;
    
    MateriaHandler(); 
    public:
    // avoid copy (otherwise is not a singleton)
    MateriaHandler(const MateriaHandler &other) = delete;
    MateriaHandler& operator=(const MateriaHandler &other) = delete;
    
// Method to obtain the unique instance
    static MateriaHandler& getInstance();
    
    void addDroppedMateria(AMateria* materia);
    
    void cleanup();
    
    ~MateriaHandler();
    
    void    printMateria();
};