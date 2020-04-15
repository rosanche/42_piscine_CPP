#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class RobotomyRequestForm;

class RobotomyRequestForm : public Form {
    private:
        std::string target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        ~RobotomyRequestForm();

        RobotomyRequestForm& operator=(const RobotomyRequestForm &copy);

        void        beExecuted() const;
};

#endif