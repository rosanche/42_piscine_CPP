#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {
    private:
        int n;
        Zombie *zombies;

    public:
        ZombieHorde();
        ZombieHorde(int n);

        ~ZombieHorde();
        void announce();
};

#endif