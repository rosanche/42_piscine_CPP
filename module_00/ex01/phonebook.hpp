#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <sstream>

class Contact {
    private:
        std::string info[9][11];

    public:
        Contact();
        void    search(int e);
        void    choose_index(int i);
        void    add(int i);
};

#endif