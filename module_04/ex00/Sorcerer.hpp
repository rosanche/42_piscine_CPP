#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {
    private:
        std::string name;
        std::string title;
        Sorcerer();

    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(const Sorcerer &copy);
        ~Sorcerer();

        Sorcerer&   operator=(const Sorcerer &copy);

        std::string getName() const;
        std::string getTitle() const;

        void polymorph(Victim const &victim) const;
};

std::ostream&    operator<<(std::ostream& os, const Sorcerer& copy);

#endif