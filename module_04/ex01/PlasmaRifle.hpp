#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle();
        ~PlasmaRifle();
        PlasmaRifle(const PlasmaRifle &copy);

        PlasmaRifle&    operator=(const PlasmaRifle &copy);

        void attack() const;
};

#endif