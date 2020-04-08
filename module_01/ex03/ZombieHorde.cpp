#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde() { }

ZombieHorde::~ZombieHorde() { delete [] this->zombies; }

ZombieHorde::ZombieHorde(int n) 
{ 
    this->zombies = new Zombie[n];
    this->n = n;
    int random;

    std::string zomb[8] = { "Romain", "Handler", "Cacao", "Thomas",
                            "Cindy", "Colette", "Piaf", "Anne"};

    for (int count = 0; count < n; count++)
    {
        random = rand() % 8;
        this->zombies[count].setName(zomb[random]);
    }
}

void    ZombieHorde::announce() {
    for (int count = 0; count < n; count++)
        zombies[count].announce();
}