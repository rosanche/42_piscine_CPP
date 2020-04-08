#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
    std::cout << "--FRAGTRAP--" << std::endl;
    FragTrap Player("Romain");

    Player.meleeAttack("Tom");
    Player.meleeAttack("Rolf");
    Player.rangedAttack("Rolf");
    Player.meleeAttack("Rolf");
    Player.vaulthunter_dot_exe("Rolf");
    Player.beRepaired(120);
    Player.takeDamage(110);

    std::cout << std::endl << "--SCAVTRAP--" << std::endl;
    ScavTrap Defender("Jules");
    
    Defender.meleeAttack("Tom");
    Defender.meleeAttack("Rolf");
    Defender.rangedAttack("Rolf");
    Defender.meleeAttack("Rolf");
    Defender.beRepaired(120);
    Defender.takeDamage(110);
    Defender.challengeNewcomer();

    std::cout << std::endl << "--NINJATRAP--" << std::endl;
    NinjaTrap Ninja("NiNa");
    
    Ninja.meleeAttack("Tom");
    Ninja.meleeAttack("Rolf");
    Ninja.rangedAttack("Rolf");
    Ninja.meleeAttack("Rolf");
    Ninja.beRepaired(120);
    Ninja.takeDamage(110);
    Ninja.ninjaShoebox(Defender);
}