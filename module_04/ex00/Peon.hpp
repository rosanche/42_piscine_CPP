#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim {
    protected:
        Peon();

    public:
        Peon(std::string name);
        Peon(const Peon &copy);
        virtual ~Peon();
        
        Peon&   operator=(const Peon &copy);
        virtual void    getPolymorphed() const;
};

#endif