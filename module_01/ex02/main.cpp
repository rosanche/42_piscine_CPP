#include "ZombieEvent.hpp"

int main() 
{
    ZombieEvent zombie_event;
    Zombie  *zombie1;
    Zombie  *zombie2;
    Zombie  *zombie3;

    zombie1 = new Zombie("Normal", "Robert");
    zombie1->announce();
    delete zombie1;
    
    zombie_event.setZombieType("Strong");
    zombie2 = zombie_event.newZombie("Robert");
    zombie2->announce();
    delete zombie2;

    zombie_event.setZombieType("Weak");
    zombie3 = zombie_event.randomChump();
    delete zombie3;

    zombie3 = zombie_event.randomChump();
    delete zombie3;

    zombie3 = zombie_event.randomChump();
    delete zombie3;
}