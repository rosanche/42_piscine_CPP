#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
    private:
        std::string name;
        int apcost;
        AWeapon *arm;

    public:
        Character();
        Character(std::string const & name);
        ~Character();
        Character(const Character &copy);

        Character&    operator=(const Character &copy);

        std::string getName() const;
        int getAP() const;
        AWeapon* getArm() const;
        
        void recoverAP();
        void equip(AWeapon*);
        void attack(Enemy*);
};

std::ostream&    operator<<(std::ostream& os, const Character& copy);

#endif