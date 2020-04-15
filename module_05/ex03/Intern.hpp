#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Form;
class Intern;

class Intern {
    public:
        Intern();
        Intern();
        Intern(const Intern &copy);
        ~Intern();

        Form*   makeForm(std::string const name, std::string const target);
};

std::ostream&       operator<<(std::ostream &os, const Intern &copy);

#endif