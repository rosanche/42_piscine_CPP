#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) 
: Form("Robotomy", 72, 45, target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) 
: Form(copy.getName(), copy.getGradeSign(), copy.getGradeExecute(), copy.getTarget()) 
{ *this = copy; }

RobotomyRequestForm::~RobotomyRequestForm() { }

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

void        RobotomyRequestForm::beExecuted() const
{
    std::cout << "vrrrrr....rrrrr......Rrrr" << std::endl;
    if (rand() % 3 == 1)
        std::cout << this->getTarget() << " is automatized" << std::endl;
    else
        std::cout << "It messed up, try again..." << std::endl;
}