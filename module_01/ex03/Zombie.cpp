#include "Zombie.hpp"

Zombie::Zombie() { }

Zombie::~Zombie() { }

Zombie::Zombie(std::string type, std::string name) {
    this->type = type;
    this->name = name;
}

void    Zombie::announce() {
    std::cout << this->name << " " << this->type;
    std::cout << " Braiiiiiiinnnssss ..." << std::endl; 
}