#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() { std::cout << "Constructor called" << std::endl; }
FragTrap::FragTrap(std::string name) : 
    ClapTrap(
        name,
        100,
        100,
        100,
        100,
        1,
        30,
        20,
        5
    )
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