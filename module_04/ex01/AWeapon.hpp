#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
    private:
        std::string name;
        int apcost;
        int damage;

    public:
        AWeapon();
        AWeapon(std::string const & name, int apcost, int damage);
        ~AWeapon();
        AWeapon(const AWeapon &copy);

        AWeapon&    operator=(const AWeapon &copy);

        std::string getName() const;
        int getAPCost() const;
        int getDamage() const;
        
        virtual void attack() const = 0;
};

#endif