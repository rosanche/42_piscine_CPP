#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) { std::cout << "Zog zog." << std::endl; }
Peon::Peon(const Peon &copy) { *this = copy; }
Peon::~Peon() { std::cout << "Bleuark..." << std::endl; }

Peon& Peon::operator=(const Peon &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

void Peon::getPolymorphed() const 
{ 
    std::cout << this->name << " was just polymorphed into a pink pony!" << std::endl; 
}