#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat Romain("Romain", 1);
    PresidentialPardonForm Tata("papier");

    Romain.signForm(Tata);
    Romain.executeForm(Tata);

    ShrubberyCreationForm cont("maison");
    Bureaucrat Thomas("Thomas", 150);

    Thomas.signForm(cont);
    Thomas.executeForm(cont);

    RobotomyRequestForm jul("caca");
    Bureaucrat Mar("Jules", 20);

    Mar.signForm(jul);
    Mar.executeForm(jul);
}