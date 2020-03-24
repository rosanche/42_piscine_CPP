#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent {
    private:
        std::string type;

    public:
        ZombieEvent();

        void    setZombieType(std::string type);
        Zombie  *newZombie(std::string name);
        Zombie  *randomChump();

        ~ZombieEvent();
};

#endif