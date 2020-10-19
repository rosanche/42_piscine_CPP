/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 14:42:41 by user42            #+#    #+#             */
/*   Updated: 2020/10/01 14:42:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <string>
#include <iostream>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>() {};
		virtual ~MutantStack() {};
		MutantStack(MutantStack const &to_copy) : std::stack<T>(to_copy) {};
		MutantStack<T> &operator=(MutantStack const &to_copy)
		{
			std::stack<T>::operator =(to_copy);
		};
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		
		iterator begin() {return std::stack<T>::c.begin();};
		const_iterator begin() const {return std::stack<T>::c.begin();};
		reverse_iterator rbegin() {return std::stack<T>::c.rbegin();};
		const_reverse_iterator rbegin() const {return std::stack<T>::c.rbegin();};

		iterator end() {return std::stack<T>::c.end();};
		const_iterator end() const {return std::stack<T>::c.end();};
		reverse_iterator rend() {return std::stack<T>::c.rend();};
		const_reverse_iterator rend() const {return std::stack<T>::c.end();};
};
#endif
