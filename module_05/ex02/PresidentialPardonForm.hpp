#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class PresidentialPardonForm;

class PresidentialPardonForm : public Form {
    private:
        std::string target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        ~PresidentialPardonForm();

        PresidentialPardonForm& operator=(const PresidentialPardonForm &copy);

        void        beExecuted() const;
};

#endif