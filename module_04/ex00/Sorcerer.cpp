#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {};
Sorcerer::Sorcerer(std::string name, std::string title)
: name(name), title(title) 
{
    std::cout << name << ", " << title << ", is born!" << std::endl;
}
Sorcerer::Sorcerer(const Sorcerer &copy) { *this = copy; }
Sorcerer::~Sorcerer()
{
    std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer& Sorcerer::operator=(const Sorcerer &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

std::string Sorcerer::getName() const { return (this->name); }
std::string Sorcerer::getTitle() const { return (this->title); }

void Sorcerer::polymorph(Victim const &victim) const { victim.getPolymorphed(); }

std::ostream& operator<<(std::ostream& os, const Sorcerer & copy)
{
    os << "I am " << copy.getName() << ", " << copy.getTitle();
    os << ", and i like ponies!" << std::endl;
    return (os);
}