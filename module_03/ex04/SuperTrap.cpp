#include "SuperTrap.hpp"

SuperTrap::SuperTrap() { std::cout << "Constructor called" << std::endl; }
SuperTrap::SuperTrap(std::string name) : 
    ClapTrap(
        name,
        100,
        100,
        120,
        120,
        1,
        60,
        20,
        5
    ),
    FragTrap(name),
    NinjaTrap(name)
{
    std::cout << "Constructor SuperTrap called" << std::endl;
    this->name = name;
}
SuperTrap::SuperTrap(const SuperTrap& copy)
{
    *this = copy;
}
SuperTrap& SuperTrap::operator=(const SuperTrap& copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}
SuperTrap::~SuperTrap() { std::cout << "Destructor SuperTrap called" << std::endl; }
