#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <exception>
#include <limits>
#include <cmath>

class Convert
{
	public:
		Convert(std::string value);
		~Convert();
		Convert(Convert const &);
		Convert &operator=(Convert const &to_copy);
		bool conv();
		void printChar();
		void printInt();
		void printFloat();
		void printDouble();
	
	class Error : public std::exception
	{
		public:
			Error() throw();
			~Error() throw();
			Error(Error const &) throw();
			Error &operator=(Error const &to_copy) throw();
			virtual const char* what() const throw();
	};		

	private:
		Convert();
		std::string _value;
		double _value_double;
};
#endif
