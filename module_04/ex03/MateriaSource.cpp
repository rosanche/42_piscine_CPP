#include "MateriaSource.hpp"

MateriaSource::MateriaSource() { }

MateriaSource& MateriaSource::operator=(const MateriaSource &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    for (int i = 0; i < 4; i++)
        if (this->materiaS[i])
            delete materiaS[i];
    for (int i = 0; i < 4; i++)
        if (copy.materiaS[i])
            this->materiaS[i] = copy.materiaS[i]->clone();
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (this->materiaS[i])
            delete materiaS[i];
}

void MateriaSource::learnMateria(AMateria *mat)
{
    int i = 0;
    while (this->materiaS[i])
        i++;
    if (i < 4)
        this->materiaS[i] = mat->clone();
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    AMateria *mater;
    for (int i = 0; this->materiaS[i]; i++)
    {
        if (this->materiaS[i] && this->materiaS[i]->getType() == type)
        {
            mater = this->materiaS[i]->clone();
            return (mater);
        }
    }
}

