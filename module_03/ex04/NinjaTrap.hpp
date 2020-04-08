#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {
    public:
        NinjaTrap();
        NinjaTrap(std::string name);
        NinjaTrap(const NinjaTrap& copy);
        ~NinjaTrap();

        NinjaTrap& operator=(const NinjaTrap& copy);

        void    ninjaShoebox(ClapTrap &ClapTrap);
        void    ninjaShoebox(NinjaTrap &NinjaTrap);
        void    ninjaShoebox(ScavTrap &ScavTrap);
        void    ninjaShoebox(FragTrap &FragTrap);
};

#endif