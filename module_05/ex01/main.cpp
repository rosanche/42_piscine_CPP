#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Form paper("contrat", 150, 140);
    Bureaucrat Romain("Romain", 100);

    Romain.signForm(paper);

    Form cont("contrat", 90, 140);
    Bureaucrat Thomas("Romain", 100);

    Thomas.signForm(cont);
}