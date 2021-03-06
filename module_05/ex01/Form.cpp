#include "Form.hpp"

Form::Form() {}

Form::Form(const std::string name, int const gradeSign, int const gradeExecute) 
: name(name), signeup(false)
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

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Error: Grade too Low!");
}

Form::GradeTooLowException::GradeTooLowException() { }
Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &copy) { *this = copy; }
Form::GradeTooLowException::~GradeTooLowException() throw() { }
Form::GradeTooLowException& Form::GradeTooLowException::operator=(const GradeTooLowException &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Error: Grade too High!");
}

Form::GradeTooHighException::GradeTooHighException() { }
Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &copy) { *this = copy; }
Form::GradeTooHighException::~GradeTooHighException() throw() { }
Form::GradeTooHighException& Form::GradeTooHighException::operator=(const GradeTooHighException &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

void        Form::beSigned(const Bureaucrat &crat)
{
    if (crat.getGrade() > this->getGradeSign())
        throw Form::GradeTooLowException();
    else
        this->signeup = true;
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