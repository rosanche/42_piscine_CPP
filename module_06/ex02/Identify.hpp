#ifndef IDENTIFY_HPP
#define IDENTIFY_HPP
#include <string>
#include <exception>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_pointer(Base *p);
void identify_from_reference(Base &p);
#endif
