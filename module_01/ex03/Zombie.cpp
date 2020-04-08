#include "Zombie.hpp"

Zombie::Zombie() {
    type = "";
}

Zombie::~Zombie() { }

Zombie::Zombie(std::string type, std::string name) {
    this->type = type;
    this->name = name;
}

void    Zombie::announce() {
    std::cout << this->name << " " << this->type;
    std::cout << " Braiiiiiiinnnssss ..." << std::endl; 
}

void    Zombie::setName(std::string name) {
    this->name = name;
}