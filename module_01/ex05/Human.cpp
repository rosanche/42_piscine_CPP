#include "Human.hpp"

Human::Human() { }

Human::~Human() { }

Brain&       Human::getBrain()
{
    return ((Brain &)this->myBrain);
}

std::string Human::identify() const
{
    return (this->myBrain.identify());
}