/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 18:17:16 by user42            #+#    #+#             */
/*   Updated: 2020/10/02 10:40:56 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span sp = Span(5);
	try
	{
		sp.addNumber(5);
		sp.addNumber(9);
		sp.addNumber(17);
		sp.addNumber(11);
		sp.addNumber(3);
	
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}

	Span sp2 = Span(1);
	try
	{
		sp2.addNumber(5);
		sp2.addNumber(3);
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}
	try
	{
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}
	try
	{
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}

	Span sp3 = Span(3);
	try
	{
		sp3.addNumber(2147483647);
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}
	try
	{
		sp3.addNumber(-9685);
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}
	try
	{
		sp3.addNumber(-85);
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}
	try
	{
		std::cout << sp3.shortestSpan() << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}
	try
	{
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}
	srand(time(NULL));
	Span sp4 = Span(10000);
	try
	{		
		for (int i = 0; i < 10000; i++)
		sp4.addNumber(std::rand());
		std::cout << sp4.shortestSpan() << std::endl;
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}
	Span sp5 = Span(10000);
	try
	{
		std::vector<int> t_vec;
		for (int i = 0; i < 10000; i++)
			t_vec.push_back(std::rand());
		sp5.addNumber(t_vec);
		std::cout << sp5.shortestSpan() << std::endl;
		std::cout << sp5.longestSpan() << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}
	Span sp6 = Span(100000);
	try
	{
		sp6.addNumber(0, 100000);
		std::cout << sp6.shortestSpan() << std::endl;
		std::cout << sp6.longestSpan() << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}
}
