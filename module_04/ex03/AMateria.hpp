#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria;

class AMateria
{
    private:
        std::string     type;
        unsigned int    _xp;
    public:
        // Coplien
        AMateria(std::string const & type);
        AMateria(const AMateria&);
        virtual ~AMateria();
        AMateria &operator=(const AMateria& copy);

        // Getter - Setter
        std::string const & getType() const;        // Returns the materia type
        unsigned int        getXP() const;          // Returns the Materia'XP

        // Additionnal
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
};

#endif