#include "Convert.hpp"

Convert::Convert() 
{
}

Convert::Convert(std::string value) :
_value(value),
_value_double(0)
{
}

Convert::~Convert()
{
}

Convert::Convert(Convert const &to_copy) :
_value(to_copy._value),
_value_double(to_copy._value_double)
{
}

Convert &Convert::operator=(Convert const &to_copy)
{
	_value = to_copy._value;
	_value_double = to_copy._value_double;
	return (*this);
}

bool Convert::conv()
{
	if (_value.size() == 1)
	{
		_value_double = static_cast<double>(_value[0]);
		return (true);
	}
	try
	{
		_value_double = std::stod(_value);
		return (true);
	}
	catch (const std::invalid_argument& ia)
	{
		std::cerr << "Invalid argument\n";
		return (false);
	}
}

void Convert::printChar()
{
	char _value_char;
	std::cout << "char: ";
	_value_char = static_cast<char>(_value_double);
	if (_value_double == std::numeric_limits<double>::infinity()
		|| _value_double == -(std::numeric_limits<double>::infinity())
		|| std::isnan(_value_double)
		|| _value_double < std::numeric_limits<unsigned char>::min()
		|| _value_double > std::numeric_limits<unsigned char>::max())
		std::cout <<"impossible\n";
	else if (_value_char < 31 || _value_char > 126)
		std::cout << "Non displayable\n";
	else
		std::cout << "'" <<	_value_char << "'\n";
}

void Convert::printInt()		
{
	std::cout << "int: ";
	if (_value_double < std::numeric_limits<int>::min() || _value_double > std::numeric_limits<int>::max())
		std::cout << "impossible\n";
	else
		std::cout << static_cast<int>(_value_double) << "\n";
}

void Convert::printFloat()		
{
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(_value_double) << "f\n";
}

void Convert::printDouble()		
{
	std::cout << "double: " << std::fixed << std::setprecision(1) << _value_double << "\n";
}
