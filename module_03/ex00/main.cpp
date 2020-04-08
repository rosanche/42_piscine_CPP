#include "FragTrap.hpp"

int main()
{
    FragTrap Player("Romain");
    Player.meleeAttack("Tom");
    Player.meleeAttack("Rolf");
    Player.rangedAttack("Rolf");
    Player.meleeAttack("Rolf");
    Player.vaulthunter_dot_exe("Rolf");
    Player.beRepaired(120);
    Player.takeDamage(110);
}