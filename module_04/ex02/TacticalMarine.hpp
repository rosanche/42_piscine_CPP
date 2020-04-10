#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine();
        TacticalMarine(const TacticalMarine &copy);
        ~TacticalMarine();

        TacticalMarine& operator=(const TacticalMarine &copy);

        TacticalMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};

#endif