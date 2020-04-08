#include <iostream>

int main() 
{
    std::string st = "HI THIS IS BRAIN";
    std::string *pt = &st;
    std::string &rf = st;

    std::cout << st << std::endl;
    std::cout << pt << std::endl;
    std::cout << rf << std::endl;
}