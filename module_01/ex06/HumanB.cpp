#include "HumanB.hpp"

HumanB::HumanB() { }

HumanB::HumanB(std::string name) {
    this->name = name;
}

void    HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}

void    HumanB::attack() {
    std::cout << this->name << " attacks with his ";
    std::cout << this->weapon->getType() << std::endl;
}

HumanB::~HumanB() { }