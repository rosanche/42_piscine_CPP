#include "FragTrap.hpp"

FragTrap::FragTrap() { std::cout << "Constructor called" << std::endl; }
FragTrap::FragTrap(std::string name) : 
    hit_p(100), 
    max_hit_p(100), 
    ener_p(100), 
    max_ener_p(100), 
    level(1), 
    me_att_d(30), 
    ran_att_d(20), 
    arm_dam_r(5)
{
    std::cout << "Constructor called" << std::endl;
    this->name = name;
}
FragTrap::FragTrap(const FragTrap& copy)
{
    *this = copy;
}
FragTrap& FragTrap::operator=(const FragTrap& copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}
FragTrap::~FragTrap() { std::cout << "Destructor called" << std::endl; }

void FragTrap::rangedAttack(std::string const & target)
{
    if (this->ener_p >= this->ran_att_d)
    {
        this->ener_p -= this->ran_att_d;
        this->ener_p = this->ener_p > 0 ? this->ener_p : 0;
        std::cout << "FR4G-TP " << this->name << " attaque ";
        std::cout << target << " à distance, causant " << this->ran_att_d << " points de dégâts !" << std::endl;
    }
    else
    {
        std::cout << "FR4G-TP " << this->name << " n'a pas assez d'énergie pour attaquer!" << std::endl;
        this->level++;
    }
}

void FragTrap::meleeAttack(std::string const & target)
{
    if (this->ener_p >= this->me_att_d)
    {
        this->ener_p -= this->me_att_d;
        this->ener_p = this->ener_p > 0 ? this->ener_p : 0;
        std::cout << "FR4G-TP " << this->name << " attaque ";
        std::cout << target << " à distance, causant " << this->me_att_d << " points de dégâts !" << std::endl;
    }
    else
        std::cout << "FR4G-TP " << this->name << " n'a pas assez d'énergie pour attaquer!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    this->hit_p -= amount + this->arm_dam_r;
    this->hit_p = this->hit_p > 0 ? this->hit_p : 0;
    std::cout << "FR4G-TP " << this->name << " a perdu ";
    std::cout << amount << " HP de sa vie" << std::endl;
    if (this->hit_p == 0)
        std::cout << "FR4G-TP " << this->name << " est mort !" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    this->hit_p += amount;
    this->hit_p = this->hit_p < this->max_hit_p ? this->hit_p : this->max_hit_p;
    this->ener_p += amount;
    this->ener_p = this->ener_p < this->max_ener_p ? this->ener_p : this->max_hit_p;
    std::cout << "FR4G-TP " << this->name << " a gagné ";
    std::cout << amount << " HP de vie et d'énergie" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    std::string att[5] = {
        "attaque dans le dos", "attaque au couteau", "attaque avec un doigt",
        "attaque au coeur", "attaque aux yeux"
    };
    int random = rand() % 5;
    if (this->ener_p >= 25)
    {
        this->ener_p -= this->me_att_d;
        std::cout << "FR4G-TP " << this->name << " " << att[random] << " " << target << std::endl;
    }
    else
        std::cout << "FR4G-TP " << this->name << " n'a pas assez d'énergie pour attaquer!" << std::endl;
}