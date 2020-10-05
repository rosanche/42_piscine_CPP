#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) 
: Form("PresidentialPardon", 72, 45, target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) 
: Form(copy.getName(), copy.getGradeSign(), copy.getGradeExecute(), copy.getTarget()) 
{ *this = copy; }

PresidentialPardonForm::~PresidentialPardonForm() { }

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

void        PresidentialPardonForm::beExecuted() const
{
    std::cout << this->getTarget() << " was just pardoned by Zafod Beeblebrox" << std::endl;
}