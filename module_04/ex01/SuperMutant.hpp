#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
        SuperMutant();
        ~SuperMutant();
        SuperMutant(const SuperMutant &copy);

        SuperMutant&    operator=(const SuperMutant &copy);
        
        virtual void takeDamage(int dam);
};

#endif