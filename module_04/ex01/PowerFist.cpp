#include "PowerFist.hpp"

PowerFist::PowerFist()
: AWeapon("Power Fist", 8, 50) { }
PowerFist::~PowerFist() { }
PowerFist::PowerFist(const PowerFist &copy): AWeapon(copy) { *this = copy; }

PowerFist&    PowerFist::operator=(const PowerFist &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

void PowerFist::attack() const 
{
    std::cout << "* pschhh... SBAM ! *" << std::endl;
}