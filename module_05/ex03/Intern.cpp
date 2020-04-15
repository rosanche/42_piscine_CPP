#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern() { }

Intern::Intern(const Intern &copy) { *this = copy; }
Intern::~Intern() { }

Intern& Intern::operator=(const Intern &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

Form*   Intern::makeForm(std::string const name, std::string const target)
{

}