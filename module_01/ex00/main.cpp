#include "Pony.hpp"

void        ponyOnTheStack()
{
    Pony ponyStack(15, "Prout", "blue", "Romain", "bacon");
    ponyStack.speech();
}

void ponyOnTheHeap()
{
    Pony *ponyHeap = new Pony(15, "Prout", "blue", "Romain", "bacon");
    ponyHeap->speech();
    delete ponyHeap;
}

int main()
{
    std::cout << "<<STACK>>" << std::endl;
    ponyOnTheStack();

    std::cout << std::endl << "<<HEAP>>" << std::endl;
    ponyOnTheHeap();
}