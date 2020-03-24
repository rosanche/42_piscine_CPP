#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class Pony {
    private:
        int speed;
        std::string name;
        std::string owner;
        std::string color;
        std::string favfood;
    
    public:
        Pony();
        Pony(int speed, std::string name, std::string color, std::string owner, std::string favfood);

        int         get_speed();
        std::string get_name();
        std::string get_owner();
        std::string get_color();
        std::string get_favfood();
        void        speech();

        ~Pony();
};

void ponyOnTheStack();

void ponyOnTheHeap();

#endif