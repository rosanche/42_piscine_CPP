#include "ScavTrap.hpp"
#include <string>
#include <iostream>
#include <sstream>

ScavTrap::ScavTrap() { std::cout << "Constructor called" << std::endl; }
ScavTrap::ScavTrap(std::string name) : 
    hit_p(100), 
    max_hit_p(100), 
    ener_p(50), 
    max_ener_p(50), 
    level(1), 
    me_att_d(20), 
    ran_att_d(15), 
    arm_dam_r(3)
{
    std::cout << "Constructor ScavTrap called" << std::endl;
    this->name = name;
}
ScavTrap::ScavTrap(const ScavTrap& copy)
{
    *this = copy;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}
ScavTrap::~ScavTrap() { std::cout << "Destructor ScavTrap called" << std::endl; }

void ScavTrap::rangedAttack(std::string const & target)
{
    if (this->ener_p >= this->ran_att_d)
    {
        this->ener_p -= this->ran_att_d;
        this->ener_p = this->ener_p > 0 ? this->ener_p : 0;
        std::cout << "FR4G-TP ScavTrap " << this->name << " attaque ";
        std::cout << target << " à distance, causant " << this->ran_att_d << " points de dégâts !" << std::endl;
    }
    else
    {
        std::cout << "FR4G-TP ScavTrap " << this->name << " n'a pas assez d'énergie pour attaquer!" << std::endl;
        this->level++;
    }
}

void ScavTrap::meleeAttack(std::string const & target)
{
    if (this->ener_p >= this->me_att_d)
    {
        this->ener_p -= this->me_att_d;
        this->ener_p = this->ener_p > 0 ? this->ener_p : 0;
        std::cout << "FR4G-TP ScavTrap " << this->name << " attaque ";
        std::cout << target << " en mêlé, causant " << this->me_att_d << " points de dégâts !" << std::endl;
    }
    else
        std::cout << "FR4G-TP ScavTrap " << this->name << " n'a pas assez d'énergie pour attaquer!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    this->hit_p -= amount + this->arm_dam_r;
    this->hit_p = this->hit_p > 0 ? this->hit_p : 0;
    std::cout << "FR4G-TP ScavTrap " << this->name << " a perdu ";
    std::cout << amount << " HP de sa vie" << std::endl;
    if (this->hit_p == 0)
        std::cout << "FR4G-TP ScavTrap " << this->name << " est mort !" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    this->hit_p += amount;
    this->hit_p = this->hit_p < this->max_hit_p ? this->hit_p : this->max_hit_p;
    this->ener_p += amount;
    this->ener_p = this->ener_p < this->max_ener_p ? this->ener_p : this->max_hit_p;
    std::cout << "FR4G-TP ScavTrap " << this->name << " a gagné ";
    std::cout << amount << " HP de vie et d'énergie" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
    std::string res;
    res[0] = '3';
    std::string choice[3] = { 
        "Défendre jusqu'à sa mort",
        "Partir comme un lâche",
        "Aller dans le camp adverse"
    };
    while (res[0] > '2' && !res[1])
    {
        std::cout << "Choisissez --0-- " << choice[0] << std::endl;
        std::cout << "Choisissez --1-- " << choice[1] << std::endl;
        std::cout << "Choisissez --2-- " << choice[2] << std::endl;
        std::getline(std::cin, res);
        if (res[0] > '2' || res[1])
            std::cout << "Choix incorrect" << std::endl;
    }
    std::cout << "ScavTrap va : " << (res[0] > '2' || res[1] ?
    "rien faire" : choice[res[0] - 48]) << std::endl;
}