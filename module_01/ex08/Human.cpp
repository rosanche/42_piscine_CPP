#include "Human.hpp"

void Human::meleeAttack(std::string const & target) {
    std::cout << "Melee Attack to " << target << std::endl;
}

void Human::rangedAttack(std::string const & target) {
    std::cout << "Ranged Attack to " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target) {
    std::cout << "Intimidating shout to " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target) {
    void *func[3] = [this->]
}