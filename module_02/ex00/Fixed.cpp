#include "Fixed.hpp"

Fixed::Fixed() 
{ 
    std::cout << "Default constructor called" << std::endl;
    this->pfix = 0;
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

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->pfix);
}