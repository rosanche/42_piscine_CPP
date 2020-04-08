#include "Brain.hpp"

Brain::Brain() { }

Brain::~Brain() { }

void           Brain::getNeurone(int neurone) {
    this->neurone = neurone;
}

void           Brain::getQi(int qi)
{
    this->qi = qi;
}

std::string    Brain::identify() const
{
    std::stringstream res;

    res << this;
    return (res.str());
}