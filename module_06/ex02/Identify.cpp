#include <string>
#include <exception>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_pointer(Base *p)
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);
	if (a != 0)
		std::cout << "\"A\"\n";
	else if (b != 0)
		std::cout << "\"B\"\n";
	else if (c != 0)
		std::cout << "\"C\"\n";
	else
		std::cout << "Unindentified type \n";
}

void identify_from_reference(Base &p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "\"A\"\n";
	else if (dynamic_cast<B*>(&p))
		std::cout << "\"B\"\n";
	else if (dynamic_cast<C*>(&p))
		std::cout << "\"C\"\n";
	else
		std::cout << "Unindentified type \n";
}
