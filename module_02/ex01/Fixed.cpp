#include "Fixed.hpp"

Fixed::Fixed() 
{ 
    std::cout << "Default constructor called" << std::endl;
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
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
    this->pfix = raw;
}

Fixed &Fixed::operator=(const Fixed &op)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &op)
        this->pfix = op.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called" << std::endl;
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

std::ostream& operator<<(std::ostream &os, Fixed const &op)
{
    os << op.getRawBits();
    return (os);
}