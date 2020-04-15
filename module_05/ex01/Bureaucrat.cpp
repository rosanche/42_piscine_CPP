#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
    try 
    {
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else
            this->grade = grade;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) { *this = copy; }
Bureaucrat::~Bureaucrat() { }

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

std::string Bureaucrat::getName() const { return (this->name); }
int         Bureaucrat::getGrade() const { return (this->grade); }

void        Bureaucrat::gradeHigher()
{
    try 
    {
        if (this->grade - 1 == 0)
            throw GradeTooHighException();
        else
            this->grade -= 1; 
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}

void        Bureaucrat::gradeLower()
{
    try 
    {
        if (this->grade + 1 == 151)
            throw GradeTooLowException();
        else
            this->grade += 1;    
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}

void        Bureaucrat::signForm(Form &form)
{
    if (form.getSignup())
        std::cout << this->getName() << "can't sign the already signed " << form.getName() <<  std::endl;
    else
    {
        try {
            form.beSigned(*this);
            std::cout << this->getName() << " signs " << form.getName() << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << this->getName() << " cant sign " << form.getName() << " because : ";
            std::cout << e.what() << std::endl;
        }
    }
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Error: Grade too Low!");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Error: Grade too High!");
}

std::ostream&       operator<<(std::ostream &os, const Bureaucrat &copy)
{
    os << copy.getName() << ", bureaucrat grade " << copy.getGrade() << std::endl;
    return (os);
}