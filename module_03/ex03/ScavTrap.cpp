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
    int res = 3;
    std::string choice[3] = { 
        "Défendre jusqu'à sa mort",
        "Partir comme un lâche",
        "Aller dans le camp adverse"
    };
    while (res > 2)
    {
        std::cout << "Choisissez --0-- " << choice[0] << std::endl;
        std::cout << "Choisissez --1-- " << choice[1] << std::endl;
        std::cout << "Choisissez --2-- " << choice[2] << std::endl;
        std::cin >> res;
        if (res > 2)
            std::cout << "Choix incorrect" << std::endl;
    }
    std::cout << "ScavTrap va : " << choice[res] << std::endl;
}