#include "Fixed.hpp"

Fixed::Fixed() 
{ 
    this->pfix = 0;
}

Fixed::Fixed(const int i)
{
    this->pfix = i << this->b;
}

Fixed::Fixed(const float f)
{
    this->pfix = roundf(f * (1 << this->b));
}

Fixed::Fixed(const Fixed &copy) 
{
    *this = copy;
}

Fixed::~Fixed()
{
}

void Fixed::setRawBits(int const raw)
{
    this->pfix = raw;
}

Fixed &Fixed::operator=(const Fixed &op)
{
    if (this != &op)
        this->pfix = op.getRawBits();
    return (*this);
}

bool Fixed::operator<(Fixed const &op) const
{
    return (this->pfix < op.getRawBits());
   /*  if (this->pfix < op.getRawBits())
        return (true);
    else
        return (false) */
}

bool Fixed::operator>(Fixed const &op) const
{
    if (this->pfix > op.getRawBits())
        return (true);
    else
        return (false);
}

bool Fixed::operator<=(Fixed const &op) const
{
    if (this->pfix <= op.getRawBits())
        return (true);
    else
        return (false);
}

bool Fixed::operator>=(Fixed const &op) const
{
    if (this->pfix >= op.getRawBits())
        return (true);
    else
        return (false);
}

bool Fixed::operator==(Fixed const &op) const
{
    if (this->pfix == op.getRawBits())
        return (true);
    else
        return (false);
}

bool Fixed::operator!=(Fixed const &op) const
{
    if (this->pfix != op.getRawBits())
        return (true);
    else
        return (false);
}

Fixed Fixed::operator+(Fixed const &op) const
{
    Fixed res;
    res.setRawBits(this->pfix + op.getRawBits());
    return (res);
}

Fixed Fixed::operator-(Fixed const &op) const
{
    Fixed res;
    res.setRawBits(this->pfix - op.getRawBits());
    return (res);
}

Fixed Fixed::operator*(Fixed const &op) const
{
    Fixed res;
    res.setRawBits(this->pfix * op.getRawBits());
    return (res);
}

Fixed Fixed::operator/(Fixed const &op) const
{
    Fixed res;
    res.setRawBits(this->pfix / op.getRawBits());
    return (res);
}

Fixed& Fixed::operator++()
{
    this->pfix++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed res(*this);
    operator++();
    return (res);
}

Fixed& Fixed::operator--()
{
    this->pfix--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed res(*this);
    operator--();
    return (res);
}
 Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}
 Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}

int Fixed::getRawBits(void) const 
{
    return (this->pfix);
}

float Fixed::toFloat(void) const
{
    return ((float)this->pfix / (1 << this->b));
}

int Fixed::toInt(void) const
{
    return ((int)this->pfix >> this->b);
}

std::ostream& operator<<(std::ostream &os, const Fixed& op)
{
    os << op.getRawBits();
    return (os);
}