/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 18:17:01 by user42            #+#    #+#             */
/*   Updated: 2020/10/01 18:02:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>

class NotFoundException : public std::exception
{
	public:
		NotFoundException() throw () {};
		virtual ~NotFoundException() throw () {};
		NotFoundException(NotFoundException const &to_copy) throw ()
		{
			*this = to_copy;
		};
		NotFoundException &operator=(NotFoundException const &to_copy) throw () 
		{
			(void) to_copy;
			return (*this);
		};
		virtual const char *what() const throw ()
		{
			return "Not found\n";
		};
};

template <typename T>
typename T::iterator easyfind(T &container, int x)
{	
	typename T::iterator it = std::find(container.begin(), container.end(), x);
	if (it == container.end())
		throw NotFoundException();
	return (it);
}
#endif
