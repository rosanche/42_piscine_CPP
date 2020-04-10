#include "Character.hpp"

Character::Character() { }
Character::Character(std::string const & name)
: name(name) { this->apcost = 40; }
Character::~Character() { }
Character::Character(const Character &copy) { *this = copy; }

Character&    Character::operator=(const Character &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

std::string Character::getName() const { return (this->name); }
int Character::getAP() const { return (this->apcost); }
AWeapon* Character::getArm() const { return (this->arm); } 

void Character::recoverAP() 
{ 
    apcost += 10;
    if (apcost > 40)
        apcost = 40;    
}

void Character::equip(AWeapon *arm) { this->arm = arm; }

void Character::attack(Enemy *enemy) 
{
    if (apcost > 0)
    {
        apcost -= this->getArm()->getAPCost();
        std::cout << this->getName() << " attaque " << enemy->getType() << " with a ";
        std::cout << this->arm->getName() << std::endl;
        arm->attack();
        enemy->takeDamage(arm->getDamage());
        if (enemy->getHP() <= 0)
            delete enemy;
    }
    else
        std::cout << "You can't attack, not enough AP" << std::endl;
}

std::ostream&    operator<<(std::ostream& os, const Character& copy)
{
    if (copy.getArm())
        os << copy.getName() << " has " << copy.getAP() << " AP and carries a " << copy.getArm()->getName() << std::endl;
    else
        os << copy.getName() << " has " << copy.getAP() << " AP and is unarmed" << std::endl;
    return (os);
}