#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
: Enemy(170, "Super Mutant") 
{
    std::cout << "Gaaah. Break everything !" << std::endl;
}
SuperMutant::~SuperMutant() { std::cout << "Aaargh ..." << std::endl; }
SuperMutant::SuperMutant(const SuperMutant &copy): Enemy(copy) { *this = copy; }

SuperMutant&    SuperMutant::operator=(const SuperMutant &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

void SuperMutant::takeDamage(int dam)
{
    dam -= 3;
    Enemy::takeDamage(dam);
}