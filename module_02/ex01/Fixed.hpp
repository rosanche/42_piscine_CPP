#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed {
    private:
        int _value;
        const static int _BIT_COUNT;
    public:
        Fixed(void);
        Fixed(const int i);
        Fixed(const float value);
        Fixed(const Fixed &copy);
        ~Fixed();

        Fixed& operator=(const Fixed &op);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator<<(std::ostream &os, Fixed const &op);

#endif