#include "Bureaucrat.hpp"

int main()
{
    std::cout << "Init too Low!" << std::endl;
    Bureaucrat bureau("Romain", 151);

    std::cout << "Init too High!" << std::endl;
    Bureaucrat tom("Romain", 0);

    std::cout << "Go to Low!" << std::endl;
    Bureaucrat burea("Romain", 150);
    std::cout << burea.getGrade() << std::endl;
    burea.gradeLower();
    std::cout << burea.getGrade() << std::endl;

    std::cout << "Go to High!" << std::endl;
    Bureaucrat rom("Romain", 1);
    std::cout << rom.getGrade() << std::endl;
    rom.gradeHigher();
    std::cout << rom.getGrade() << std::endl;
}