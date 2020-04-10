#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type), _xp(0) { }
AMateria::~AMateria() { }
AMateria::AMateria(const AMateria &copy) { *this = copy; }

AMateria&   AMateria::operator=(const AMateria &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

std::string const & AMateria::getType() const { return (this->type); }
unsigned int AMateria::getXP() const { return (this->_xp); }

void AMateria::use(ICharacter& target)
{
    (void)target;
    this->_xp += 10;
}