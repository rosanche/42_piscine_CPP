#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
: Enemy(80, "RadScorpion") 
{
    std::cout << "* click click click *" << std::endl;
}
RadScorpion::~RadScorpion() { std::cout << "* SPROTCH *" << std::endl; }
RadScorpion::RadScorpion(const RadScorpion &copy): Enemy(copy) { *this = copy; }

RadScorpion&    RadScorpion::operator=(const RadScorpion &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

void RadScorpion::takeDamage(int dam)
{
    Enemy::takeDamage(dam);
}