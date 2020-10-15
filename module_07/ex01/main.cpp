#include "iter.cpp"

int main()
{
    int plop[] = {0,1,2,3,4,5,6,7,8,9};
    std::string strs[] = { "Salut", "Comment" , "Tu", "Vas", "?"};

    std::cout << "Print integer array : " << std::endl;
    iter<const int>(plop, 10, print);
    std::cout << std::endl;
    iter<int>(plop, 10, addOne);
    std::cout << "Print integer array after addOne: " << std::endl;
    iter<const int>(plop, 10, print);
    std::cout << std::endl;
    std::cout << "Print std::string array :" << std::endl;
    iter<const std::string>(strs, 5, print);
}