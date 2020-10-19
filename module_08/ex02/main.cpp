/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 14:42:28 by user42            #+#    #+#             */
/*   Updated: 2020/10/02 10:50:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>
#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	std::cout << "Stack : 5 - 17" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top: "<<  mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size after pop: " << mstack.size() << std::endl;
	std::cout << "Stack : 5 - 3 - 5 - 737 - 0" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	std::cout << "*it: " << *it << std::endl;
	++it;
	std::cout << "*it after ++it: " << *it << std::endl;
	++it;
	std::cout << "*it after ++it: " << *it << std::endl;
	++it;
	std::cout << "*it after ++it: " << *it << std::endl;
	++it;
	std::cout << "*it after ++it: " << *it << std::endl;
	--it;
	std::cout << "*it after --it: " << *it << std::endl;
	it++;
	std::cout << "*it after it++: " << *it << std::endl;
	it--;
	std::cout << "*it after it--: " << *it << std::endl;
	it--;
	std::cout << "*it after it--: " << *it << std::endl;
	it--;
	std::cout << "Values of *it for the loop it++ until it == ite: " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	MutantStack<int>::reverse_iterator itr = mstack.rbegin();
	MutantStack<int>::reverse_iterator iter = mstack.rend();
	
	std::cout << "*itr: " << *itr << std::endl;
	++itr;
	std::cout << "*itr after ++itr: " << *itr << std::endl;
	--itr;
	std::cout << "*itr after --itr: " << *itr << std::endl;
	std::cout << "Values of *itr for the loop itr++ until itr == iter: " << std::endl;
	while (itr != iter)
	{
		std::cout << *itr << std::endl;
		++itr;
	}

	std::cout << "-------CONST ITERATOR--------" << std::endl;
	MutantStack<int> mstack2;
	std::cout << "Stack : 5 - 3 - 5 - 737 - 0" << std::endl;
	mstack2.push(5);
	mstack2.push(3);
	mstack2.push(5);
	mstack2.push(737);
	mstack2.push(0);
	MutantStack<int>::const_iterator it2 = mstack2.begin();
	MutantStack<int>::const_iterator ite2 = mstack2.end();
	
	std::cout << "*it: " << *it2 << std::endl;
	++it2;
	std::cout << "*it after ++it: " << *it2 << std::endl;
	++it2;
	std::cout << "*it after ++it: " << *it2 << std::endl;
	++it2;
	std::cout << "*it after ++it: " << *it2 << std::endl;
	++it2;
	std::cout << "*it after ++it: " << *it2 << std::endl;
	--it2;
	std::cout << "*it after --it: " << *it2 << std::endl;
	it2++;
	std::cout << "*it after it++: " << *it2 << std::endl;
	it2--;
	std::cout << "*it after it--: " << *it2 << std::endl;
	it2--;
	std::cout << "*it after it--: " << *it2 << std::endl;
	it2--;
	std::cout << "Values of *it for the loop it++ until it == ite: " << std::endl;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	MutantStack<int>::const_reverse_iterator itr2 = mstack2.rbegin();
	MutantStack<int>::const_reverse_iterator iter2 = mstack2.rend();
	
	std::cout << "*itr: " << *itr2 << std::endl;
	itr2++;
	std::cout << "*itr after ++itr: " << *itr2 << std::endl;
	--itr2;
	std::cout << "*itr after --itr: " << *itr2 << std::endl;
	std::cout << "Values of *itr for the loop itr++ until itr == iter: " << std::endl;
	while (itr2 != iter2)
	{
		std::cout << *itr2 << std::endl;
		++itr2;
	}
	return 0;
}
