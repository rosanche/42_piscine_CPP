#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
: AWeapon("Plasma Rifle", 5, 21) { }
PlasmaRifle::~PlasmaRifle() { }
PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy): AWeapon(copy) { *this = copy; }

PlasmaRifle&    PlasmaRifle::operator=(const PlasmaRifle &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

void PlasmaRifle::attack() const 
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}