#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"
#include <iostream>
#include <sstream>

class Human {
    private:
        const Brain myBrain;
    
    public:
        Human();
        ~Human();
        Brain& getBrain();
        std::string identify() const;
};

#endif