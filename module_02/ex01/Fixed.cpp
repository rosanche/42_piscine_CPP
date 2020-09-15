#include "Fixed.hpp"

const int Fixed::_BIT_COUNT = 8;

Fixed::Fixed(void) 
{ 
    this->_value = 0;
}

Fixed::Fixed(const int i)
{
    this->_value = i << this->_BIT_COUNT;
}

Fixed::Fixed(const float value)
{
    this->_value = roundf(value * (1 << _BIT_COUNT));
}

Fixed::Fixed(const Fixed &copy) 
{
    *this = copy;
}

Fixed::~Fixed()
{
    this->_value = 0;
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

Fixed &Fixed::operator=(const Fixed &op)
{
    if (this != &op)
        this->_value = op.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const 
{
    return (this->_value);
}

float Fixed::toFloat(void) const
{
    return ((float)this->_value / (1 << this->_BIT_COUNT));
}

int Fixed::toInt(void) const
{
    return ((int)this->_value >> this->_BIT_COUNT);
}

std::ostream& operator<<(std::ostream &os, Fixed const &op)
{
    return (os << op.toFloat());
}
