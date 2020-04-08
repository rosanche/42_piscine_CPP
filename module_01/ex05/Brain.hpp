#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain {
    private:
        int neurone;
        int qi;
    
    public:
        Brain();
        ~Brain();

        void        getNeurone(int neurone);
        void        getQi(int qi);
        std::string identify() const;
};

#endif