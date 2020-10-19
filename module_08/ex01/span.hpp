/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 18:17:34 by user42            #+#    #+#             */
/*   Updated: 2020/10/02 10:42:16 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <string>
#include <iostream>
#include <exception>
#include <limits>
#include <cstdlib>
#include <algorithm>

class Span
{
	public:
		Span();
		Span(unsigned int N);
		~Span();
		Span(Span const &to_copy);
		Span &operator=(Span const &to_copy);
		void addNumber(int n);
		void addNumber(std::vector<int> const &numbers);
		void addNumber(int start, int end);
		int shortestSpan();
		int longestSpan();

	class MaxNumberException: public std::exception
	{
		public:
			MaxNumberException() throw () {};
			virtual ~MaxNumberException() throw () {};
			MaxNumberException(MaxNumberException const &to_copy) throw ()
			{
				*this = to_copy;
			};
			MaxNumberException &operator=(MaxNumberException const &to_copy) throw () 
			{
				(void) to_copy;
				return (*this);
			};
			virtual const char* what() const throw() {return "Maximum number already stocked.\n";};
	};		

	class NotEnoughException: public std::exception
	{
		public:
			NotEnoughException() throw () {};
			virtual ~NotEnoughException() throw () {};
			NotEnoughException(NotEnoughException const &to_copy) throw ()
			{
				*this = to_copy;
			};
			NotEnoughException &operator=(NotEnoughException const &to_copy) throw () 
			{
				(void) to_copy;
				return (*this);
			};
			virtual const char* what() const throw() {return "Not enough stocked numbers.\n";};
	};		

	class OffLimitsException: public std::exception
	{
		public:
			OffLimitsException() throw () {};
			virtual ~ OffLimitsException() throw () {};
			OffLimitsException( OffLimitsException const &to_copy) throw ()
			{
				*this = to_copy;
			};
			OffLimitsException &operator=( OffLimitsException const &to_copy) throw () 
			{
				(void) to_copy;
				return (*this);
			};
			virtual const char* what() const throw() {return "Off limit span.\n";};
	};

	class WrongArgumentException: public std::exception
	{
		public:
			WrongArgumentException() throw () {};
			virtual ~ WrongArgumentException() throw () {};
			WrongArgumentException(WrongArgumentException const &to_copy) throw ()
			{
				*this = to_copy;
			};
			WrongArgumentException &operator=(WrongArgumentException const &to_copy) throw () 
			{
				(void) to_copy;
				return (*this);
			};
			virtual const char* what() const throw() {return "Wrong arguments.\n";};
	};

	private:
		std::vector<int> _vec;	
		unsigned int _N;
};
#endif
