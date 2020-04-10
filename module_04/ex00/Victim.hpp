#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim {
    private:
        std::string name;

    public:
        Victim(std::string name);
        Victim(const Victim &copy);
        ~Victim();
        
        Victim&   operator=(const Victim &copy);
        
        std::string getName() const;
        
        void getPolymorphed() const;
};

std::ostream&    operator<<(std::ostream& os, const Victim& copy);

#endif