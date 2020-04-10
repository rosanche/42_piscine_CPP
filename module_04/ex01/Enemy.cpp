#include "Enemy.hpp"

Enemy::Enemy() { }
Enemy::Enemy(int hp, std::string const & type)
: type(type), hp(hp) { }
Enemy::~Enemy() { }
Enemy::Enemy(const Enemy &copy) { *this = copy; }

Enemy&    Enemy::operator=(const Enemy &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

std::string Enemy::getType() const { return (this->type); }
int Enemy::getHP() const { return (this->hp); }

void Enemy::takeDamage(int dam)
{
    if (hp >= 0)
        hp -= dam;
}