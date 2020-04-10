#include "AWeapon.hpp"

AWeapon::AWeapon() { }
AWeapon::AWeapon(std::string const & name, int apcost, int damage)
: name(name), apcost(apcost), damage(damage) { }
AWeapon::~AWeapon() { }
AWeapon::AWeapon(const AWeapon &copy) { *this = copy; }

AWeapon&    AWeapon::operator=(const AWeapon &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

std::string AWeapon::getName() const { return (this->name); }
int AWeapon::getAPCost() const { return (this->apcost); }
int AWeapon::getDamage() const { return (this->damage); }
void AWeapon::attack() const
{

}
