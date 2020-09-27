#include "ScavTrap.hpp"

ScavTrap::ScavTrap() { std::cout << "Constructor called" << std::endl; }
ScavTrap::ScavTrap(std::string name) : 
    ClapTrap(
        name,
        100,
        100,
        50,
        50,
        1,
        20,
        15,
        3
    )
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