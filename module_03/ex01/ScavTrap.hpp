#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

class ScavTrap {
    private:
        int hit_p;
        int max_hit_p;
        int ener_p;
        int max_ener_p;
        int level;
        std::string name;
        int me_att_d;
        int ran_att_d;
        int arm_dam_r;
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& copy);
        ~ScavTrap();

        ScavTrap& operator=(const ScavTrap& copy);

        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void challengeNewcomer();
};

#endif