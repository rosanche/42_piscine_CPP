#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    protected:
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
        ClapTrap();
        ClapTrap(
            std::string name, 
            int hit_p,
            int max_hit_p,
            int ener_p,
            int max_ener_p,
            int level,
            int me_att_d,
            int ran_att_d,
            int arm_dam_r
        );
        ClapTrap(const ClapTrap& copy);
        ~ClapTrap();

        ClapTrap& operator=(const ClapTrap& copy);

        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif