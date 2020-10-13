#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <string>
#include <random>

struct Data{
	std::string s1;
	int n;
	std::string s2;
};

void *serialize(void);
void *deserialize(void *raw);

#endif
