#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap {
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
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& copy);
        ~FragTrap();

        FragTrap& operator=(const FragTrap& copy);

        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void vaulthunter_dot_exe(std::string const & target);
};

#endif