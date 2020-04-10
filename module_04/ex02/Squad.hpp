#ifndef SQUAD_HPP
# define SQUAD_HPP

#include <iostream>

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad {
    private:
        typedef struct s_units
        {
            ISpaceMarine *unit;
            struct s_units *next;
        }               t_units;

        int     units_nb;
        t_units *units_list;

    public:
        Squad();
        Squad(const Squad &copy);
        ~Squad();

        Squad&  operator=(const Squad &copy);
        
        int getCount() const;
        ISpaceMarine* getUnit(int) const;
        int push(ISpaceMarine*);
};

#endif