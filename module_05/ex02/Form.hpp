#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form;

class Form {
    private:
        const std::string name;
        bool signeup;
        int gradeSign;
        int gradeExecute;
        const std::string target;
    
    public:
        Form();
        Form(const std::string name, int const gradeSign, int const gradeExecute, const std::string target);
        Form(const Form &copy);
        ~Form();

        Form& operator=(const Form &copy);

        std::string getName() const;
        int         getGradeSign() const;
        int         getGradeExecute() const;
        bool        getSignup() const;
        std::string getTarget() const;
        
        void        beSigned(const Bureaucrat &crat);
        virtual void        beExecuted() const;
        void        execute(Bureaucrat const & executor) const;

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

std::ostream&       operator<<(std::ostream &os, const Form &copy);

#endif