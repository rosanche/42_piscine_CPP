#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() { std::cout << "* teleports from space *" << std::endl; }
AssaultTerminator::AssaultTerminator(const AssaultTerminator &copy) { *this = copy; }
AssaultTerminator::~AssaultTerminator() { std::cout <<  "I’ll be back ..." << std::endl; }

AssaultTerminator& AssaultTerminator::operator=(const AssaultTerminator &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

AssaultTerminator* AssaultTerminator::clone() const { return (new AssaultTerminator(*this)); }
void AssaultTerminator::battleCry() const { std::cout << "This code is unclean. Purify it !" << std::endl; }
void AssaultTerminator::rangedAttack() const { std::cout << "* does nothing *" << std::endl; }
void AssaultTerminator::meleeAttack() const { std::cout << "* attaque with chainfists *" << std::endl; }