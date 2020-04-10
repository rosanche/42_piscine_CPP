#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "Character.hpp"
#include <iostream>

class Ice : public AMateria {
    public:
        Ice();
        ~Ice();
        Ice(const Ice &copy);

        Ice& operator=(const Ice &copy);

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif