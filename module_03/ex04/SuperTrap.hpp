#ifndef SuperTrap_HPP
#define SuperTrap_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
    public:
        SuperTrap();
        SuperTrap(std::string name);
        SuperTrap(const SuperTrap& copy);
        ~SuperTrap();

        SuperTrap& operator=(const SuperTrap& copy);

        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
};

#endif