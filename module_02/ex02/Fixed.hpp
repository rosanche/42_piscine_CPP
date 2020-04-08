#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed;

class Fixed {
    private:
        int pfix;
        const static int b = 8;
    public:
        Fixed();
        Fixed(const int i);
        Fixed(const float f);
        Fixed(const Fixed &copy);
        ~Fixed();

        Fixed& operator=(const Fixed &op);
        
        bool operator<(Fixed const &op) const;
        bool operator>(Fixed const &op) const;
        bool operator<=(Fixed const &op) const;
        bool operator>=(Fixed const &op) const;
        bool operator==(Fixed const &op) const;
        bool operator!=(Fixed const &op) const;

        Fixed operator+(Fixed const &op) const;
        Fixed operator-(Fixed const &op) const;
        Fixed operator*(Fixed const &op) const;
        Fixed operator/(Fixed const &op) const;

        Fixed operator++(int); //post incrementation retourne une copie de l'ancienne
        Fixed& operator++(void); //ce qui n'est pas le cas de preincremention
        Fixed operator--(int); //post incrementation retourne une copie de l'ancienne
        Fixed& operator--(void);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

        static Fixed& min(Fixed &a, Fixed &b);
        const static Fixed& min(Fixed const &a, Fixed const &b);
        static Fixed& max(Fixed &a, Fixed &b);
        const static Fixed& max(Fixed const &a, Fixed const &b);
};

std::ostream& operator<<(std::ostream &os, const Fixed& op);

#endif