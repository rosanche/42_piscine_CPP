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

        std::string getName() const;
        int         getGrade() const;

        void        gradeHigher();
        void        gradeLower();
        
        void        executeForm(Form const &form);
        void        signForm(Form &form);
        
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream&       operator<<(std::ostream &os, const Bureaucrat &copy);

#endif