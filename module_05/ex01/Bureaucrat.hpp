#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat;

class Bureaucrat {
    private:
        const std::string name;
        int grade;
    
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        ~Bureaucrat();

        Bureaucrat& operator=(const Bureaucrat &copy);

        void        signForm(Form &form);

        std::string getName() const;
        int         getGrade() const;
        void        gradeHigher();
        void        gradeLower();

        class GradeTooLowException : public std::exception {
            public:
                GradeTooLowException();
				GradeTooLowException(const GradeTooLowException &copy);

				virtual ~GradeTooLowException() throw ();

				GradeTooLowException& operator=(const GradeTooLowException &copy);
                virtual const char* what() const throw();
        };
        class GradeTooHighException : public std::exception {
            public:
                GradeTooHighException();
				GradeTooHighException(const GradeTooHighException &copy);

				virtual ~GradeTooHighException() throw ();

				GradeTooHighException& operator=(const GradeTooHighException &copy);
                virtual const char* what() const throw();
        };
};

std::ostream&       operator<<(std::ostream &os, const Bureaucrat &copy);

#endif