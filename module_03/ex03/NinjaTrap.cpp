#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() { std::cout << "Constructor called" << std::endl; }
NinjaTrap::NinjaTrap(std::string name) : 
    ClapTrap(
        name,
        60,
        60,
        120,
        120,
        1,
        60,
        5,
        0
    )
{
    std::cout << "Constructor NinjaTrap called" << std::endl;
    this->name = name;
}
NinjaTrap::NinjaTrap(const NinjaTrap& copy)
{
    *this = copy;
}
NinjaTrap& NinjaTrap::operator=(const NinjaTrap& copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}
NinjaTrap::~NinjaTrap() { std::cout << "Destructor NinjaTrap called" << std::endl; }

void    NinjaTrap::ninjaShoebox(ClapTrap &ClapTrap)
{
    ClapTrap.meleeAttack("Bonjour");
}

void    NinjaTrap::ninjaShoebox(NinjaTrap &NinjaTrap)
{
    NinjaTrap.rangedAttack("Caca");
}

void    NinjaTrap::ninjaShoebox(ScavTrap &ScavTrap)
{
    ScavTrap.challengeNewcomer();
}

void    NinjaTrap::ninjaShoebox(FragTrap &FragTrap)
{
    FragTrap.vaulthunter_dot_exe("Robert");
}
