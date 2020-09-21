#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& copy);
        ~FragTrap();

        FragTrap& operator=(const FragTrap& copy);

        void vaulthunter_dot_exe(std::string const & target);
};

#endif