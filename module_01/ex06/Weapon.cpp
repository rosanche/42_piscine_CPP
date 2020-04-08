#include "Weapon.hpp"

Weapon::Weapon() { }

Weapon::Weapon(std::string type) {
    setType(type);
}

std::string&    Weapon::getType() const {
    return ((std::string &)this->type);
}

void    Weapon::setType(std::string type) {
    this->type = type;
}

Weapon::~Weapon() {

}