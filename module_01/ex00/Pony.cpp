#include "Pony.hpp"

Pony::Pony() {}

Pony::Pony(int speed, std::string name, std::string color, std::string owner, std::string favfood)
{
    this->speed = speed;
    this->name = name;
    this->color = color;
    this->owner = owner;
    this->favfood = favfood;
}

void        Pony::speech() {
    std::cout << "My name is " << get_name() << ", ";
    std::cout << "my color is " << get_color() << ", ";
    std::cout << "and I run at " << get_speed() << "km/h. ";
    std::cout << "I love " << get_favfood() << ", ";
    std::cout << "and my owner " << get_owner() << " too.";
}

std::string Pony::get_name() { return (this->name); }
std::string Pony::get_color() { return (this->color); }
std::string Pony::get_favfood() { return (this->favfood); }
std::string Pony::get_owner() { return (this->owner); }
int Pony::get_speed() { return (this->speed); }

Pony::~Pony() {};

void        ponyOnTheStack()
{
    Pony ponyStack(15, "Prout", "blue", "Romain", "bacon");
    ponyStack.speech();
}

void ponyOnTheHeap()
{
    Pony *ponyHeap = new Pony(15, "Prout", "blue", "Romain", "bacon");
    ponyHeap->speech();
    delete ponyHeap;
}