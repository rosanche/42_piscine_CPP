#include "Identify.hpp"

int main ()
{
	A *a = new A();
	identify_from_pointer(a);
	B *b = new B();
	identify_from_pointer(b);
	C *c = new C();
	identify_from_pointer(c);
	Base *base = new Base();
	identify_from_pointer(base);

	A aa;
	identify_from_reference(aa);
	B bb;
	identify_from_reference(bb);
	C cc;
	identify_from_reference(cc);
	Base base2;
	identify_from_reference(base2);
}
