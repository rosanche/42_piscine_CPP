#include "Character.hpp"

Character::Character() { }
Character::Character(std::string name) : name(name) { }

Character& Character::operator=(const Character &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

Character::Character(const Character &copy)
{

    this->name = std::string(copy.getName());
    for (int i = 0; i < 4; i++)
        if (this->materias[i])
            delete materias[i];
    for (int i = 0; i < 4; i++)
        if (copy.materias[i])
            this->materias[i] = copy.materias[i]->clone();
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (this->materias[i])
            delete materias[i];
}

std::string const & Character::getName() const { return (this->name); }

void Character::equip(AMateria* m)
{
    int v = 0;
    while (this->materias[v])
        v++;
    if (v < 4)
        this->materias[v] = m->clone();
}

void Character::unequip(int idx)
{
    if (this->materias[idx])
        this->materias[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4)
        this->materias[idx]->use(target);
}