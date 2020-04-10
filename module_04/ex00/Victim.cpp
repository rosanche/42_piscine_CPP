#include "Victim.hpp"

Victim::Victim(std::string name)
: name(name)
{
    std::cout << "A random victim called " << name << " just appeared!" << std::endl;
}
Victim::Victim(const Victim &copy) { *this = copy; }
Victim::~Victim()
{
    std::cout << "The victim " << name << " died for no apparent reasons!" << std::endl;
}

Victim& Victim::operator=(const Victim &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

std::string Victim::getName() const { return (this->name); }

void Victim::getPolymorphed() const 
{ 
    std::cout << this->name << " was just polymorphed in a cute little sheep!" << std::endl; 
}

std::ostream& operator<<(std::ostream& os, const Victim& copy)
{
    os << "I'm " << copy.getName() << " and I like otters!" << std::endl;
    return (os);
}