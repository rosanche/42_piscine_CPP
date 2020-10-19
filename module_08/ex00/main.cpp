/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 18:17:07 by user42            #+#    #+#             */
/*   Updated: 2020/09/30 18:17:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::cout << "============== ~ VECTOR ~ ==============" << std::endl;
	std::cout << "Vector of 6 int = 4: " << std::endl;
	std::vector<int> tab(6,4);
	std::vector<int>::iterator it;
	for (int i = 0; i < 6; i++)
	{	
		std::cout << "Value " <<  i << ": ";
		try
		{
			it = easyfind(tab, i);
			std::cout << "Found -> " << *it << std::endl;
		}
		catch(std::exception const &e)
		{
			std::cout << e.what();
		}
	}

	std::cout << "\n============== ~ DEQUE ~ ==============" << std::endl;
	std::cout << "Deque of 12 {5, 2, 2, 2..., 789}" << std::endl;
	std::deque<int> tab2(10,2);
	tab2.push_front(5);
	tab2.push_back(789);
	std::deque<int>::iterator it2;
	try
	{
		std::cout << "Value 10: ";
		it2 = easyfind(tab2,10);
		std::cout << "Found -> " << *it2 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}
	try
	{
		std::cout << "Value 3: ";
		it2 = easyfind(tab2,3);
		std::cout << "Found -> " << *it2 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}
	try
	{
		std::cout << "Value 2: ";
		it2 = easyfind(tab2,2);
		std::cout << "Found -> " << *it2 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}
	try
	{
		std::cout << "Value 5: ";
		it2 = easyfind(tab2,5);
		std::cout << "Found -> " << *it2 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}
	try
	{
		std::cout << "Value 789: ";
		it2 = easyfind(tab2,789);
		std::cout << "Found -> " << *it2 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}

	std::cout << "\n============== ~ LIST ~ ==============" << std::endl;
	std::cout << "List of 3 {5, 8, 68}" << std::endl;
	std::list<int> tab3;
	tab3.push_back(5);
	tab3.push_back(8);
	tab3.push_back(68);
	std::list<int>::iterator it3;
	try
	{
		std::cout << "Value 10: ";
		it3 = easyfind(tab3,10);
		std::cout << "Found -> " << *it3 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}
	try
	{
		std::cout << "Value 3: ";
		it3 = easyfind(tab3,3);
		std::cout << "Found -> " << *it3 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}
	try
	{
		std::cout << "Value 5: ";
		it3 = easyfind(tab3,5);
		std::cout << "Found -> " << *it3 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}
	try
	{
		std::cout << "Value 8: ";
		it3 = easyfind(tab3,8);
		std::cout << "Found -> " << *it3 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}
	try
	{
		std::cout << "Value 68: ";
		it3 = easyfind(tab3,68);
		std::cout << "Found -> " << *it3 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << e.what();
	}

}
