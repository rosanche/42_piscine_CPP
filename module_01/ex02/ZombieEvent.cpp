#include "ZombieEvent.hpp"

ZombieEvent::~ZombieEvent() { }

ZombieEvent::ZombieEvent() {
    this->type = "";
}

void    ZombieEvent::setZombieType(std::string type) {
    this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string name) {
    return (new Zombie(this->type, name));
}

Zombie    *ZombieEvent::randomChump() {
    Zombie *newZ;
    std::string zomb[8] = { "Romain", "Handler", "Cacao", "Thomas",
                            "Cindy", "Colette", "Piaf", "Anne"};
    
    int random;
    random = rand() % 9;
    newZ = ZombieEvent::newZombie(zomb[random]);
    newZ->announce();
    return (ZombieEvent::newZombie(zomb[random]));
}