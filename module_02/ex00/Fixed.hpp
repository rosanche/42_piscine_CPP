#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int pfix;
        const static int b = 8;
    public:
        Fixed();
        Fixed(const Fixed &copy);
        ~Fixed();
        Fixed& operator=(const Fixed &op);

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif