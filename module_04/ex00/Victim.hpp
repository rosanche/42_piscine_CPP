#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim {
    protected:
        std::string name;
        Victim();

    public:
        Victim(std::string name);
        Victim(const Victim &copy);
        virtual ~Victim();
        
        Victim&   operator=(const Victim &copy);
        
        std::string getName() const;
        
        virtual void getPolymorphed() const;
};

std::ostream&    operator<<(std::ostream& os, const Victim& copy);

#endif