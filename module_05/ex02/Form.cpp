#include "Form.hpp"

Form::Form() {}

Form::Form(const std::string name, int const gradeSign, int const gradeExecute, const std::string target) 
: name(name), signeup(false), target(target)
{
    try 
    {
        if (gradeSign < 1 || gradeExecute < 1)
            throw Form::GradeTooHighException();
        else if (gradeSign > 150 || gradeExecute < 1)
            throw Form::GradeTooLowException();
        else
        {
            this->gradeSign = gradeSign;
            this->gradeExecute = gradeExecute;
        }    
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}

Form::Form(const Form &copy) { *this = copy; }
Form::~Form() { }

Form& Form::operator=(const Form &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

std::string Form::getName() const { return (this->name); }
int         Form::getGradeSign() const { return (this->gradeSign); }
int         Form::getGradeExecute() const { return (this->gradeExecute); }
bool        Form::getSignup() const { return (this->signeup); }
std::string Form::getTarget() const { return (this->target);}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Error: Grade too Low!");
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Error: Grade too High!");
}

void        Form::beSigned(const Bureaucrat &crat)
{
    if (crat.getGrade() > this->getGradeSign())
        throw Form::GradeTooLowException();
    else
        this->signeup = true;
}

void        Form::beExecuted() const { }

void        Form::execute(Bureaucrat const & executor) const
{
    if (!this->signeup)
		throw std::string("the form is not signed.");
	else if (executor.getGrade() > this->getGradeExecute())
		throw std::string("grade is to low.");
	this->beExecuted();
}

std::ostream&       operator<<(std::ostream &os, const Form &copy)
{
    os << copy.getName() << " is ";

	if (copy.getSignup() == false)
		os << "not signed, ";
	else
		os << "signed, ";
	os << "it is signable at grade : " << copy.getGradeSign();
	os << " and executable at grade : " << copy.getGradeExecute() << "." << std::endl;

	return (os);
}