#include "Peon.hpp"

Peon::Peon(): Victim() {} ;
Peon::Peon(std::string name) : Victim(name) { std::cout << "Zog zog." << std::endl; }
Peon::Peon(const Peon &copy): Victim(copy) { std::cout << "Zog zog." << std::endl; }
Peon::~Peon() { std::cout << "Bleuark..." << std::endl; }

Peon& Peon::operator=(const Peon &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

void Peon::getPolymorphed() const 
{ 
    std::cout << name << " was just polymorphed into a pink pony!" << std::endl; 
}