#include "ClapTrap.hpp"

ClapTrap::ClapTrap() { std::cout << "Constructor called" << std::endl; }

ClapTrap::ClapTrap(
        std::string name, 
        int hit_p,
        int max_hit_p,
        int ener_p,
        int max_ener_p,
        int level,
        int me_att_d,
        int ran_att_d,
        int arm_dam_r
    ) 
    : 
    hit_p(hit_p), 
    max_hit_p(max_hit_p), 
    ener_p(ener_p), 
    max_ener_p(max_ener_p), 
    level(level), 
    me_att_d(me_att_d), 
    ran_att_d(ran_att_d), 
    arm_dam_r(arm_dam_r)
{
    std::cout << "Constructor ClapTrap called" << std::endl;
    this->name = name;
}
ClapTrap::ClapTrap(const ClapTrap& copy)
{
    *this = copy;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}
ClapTrap::~ClapTrap() { std::cout << "Destructor ClapTrap called" << std::endl; }

void ClapTrap::rangedAttack(std::string const & target)
{
    if (this->ener_p >= this->ran_att_d)
    {
        this->ener_p -= this->ran_att_d;
        this->ener_p = this->ener_p > 0 ? this->ener_p : 0;
        std::cout << "FR4G-TP ClapTrap " << this->name << " attaque ";
        std::cout << target << " à distance, causant " << this->ran_att_d << " points de dégâts !" << std::endl;
    }
    else
    {
        std::cout << "FR4G-TP ClapTrap " << this->name << " n'a pas assez d'énergie pour attaquer!" << std::endl;
        this->level++;
    }
}

void ClapTrap::meleeAttack(std::string const & target)
{
    if (this->ener_p >= this->me_att_d)
    {
        this->ener_p -= this->me_att_d;
        this->ener_p = this->ener_p > 0 ? this->ener_p : 0;
        std::cout << "FR4G-TP ClapTrap " << this->name << " attaque ";
        std::cout << target << " à distance, causant " << this->me_att_d << " points de dégâts !" << std::endl;
    }
    else
        std::cout << "FR4G-TP ClapTrap " << this->name << " n'a pas assez d'énergie pour attaquer!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hit_p -= amount + this->arm_dam_r;
    this->hit_p = this->hit_p > 0 ? this->hit_p : 0;
    std::cout << "FR4G-TP ClapTrap " << this->name << " a perdu ";
    std::cout << amount << " HP de sa vie" << std::endl;
    if (this->hit_p == 0)
        std::cout << "FR4G-TP ClapTrap " << this->name << " est mort !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->hit_p += amount;
    this->hit_p = this->hit_p < this->max_hit_p ? this->hit_p : this->max_hit_p;
    this->ener_p += amount;
    this->ener_p = this->ener_p < this->max_ener_p ? this->ener_p : this->max_hit_p;
    std::cout << "FR4G-TP ClapTrap " << this->name << " a gagné ";
    std::cout << amount << " HP de vie et d'énergie" << std::endl;
}