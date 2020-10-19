/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 18:17:26 by user42            #+#    #+#             */
/*   Updated: 2020/10/02 10:42:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"


Span::Span() : _N(0)
{
}

Span::Span(unsigned int N) : _N(N)
{
}


Span::~Span()
{
}

Span::Span(Span const &to_copy)
{
	_vec = to_copy._vec;
	_N = to_copy._N;
}

Span &Span::operator=(Span const &to_copy)
{
	if (this != &to_copy)
	{
		_vec = to_copy._vec;
		_N = to_copy._N;
	}
	return (*this);
}

void Span::addNumber(int n)
{
	if (_vec.size() < _N)
		_vec.push_back(n);
	else
		throw MaxNumberException();
}

void Span::addNumber(std::vector<int> const &numbers)
{
	if (numbers.empty())
		return;
	if (this->_vec.size() + numbers.size() > this->_N)
		throw MaxNumberException();
	_vec.insert(_vec.end(), numbers.begin(), numbers.end());
}

void Span::addNumber(int start, int end)
{
	if (end < start)
		throw WrongArgumentException();
	int diff = end - start;
	if (_vec.size() + diff > _N)
		throw MaxNumberException();
	for (int n = start; n < end; n++)
		_vec.push_back(n);
}

int Span::shortestSpan()
{
	if (_vec.size() <= 1)
		throw NotEnoughException();
	std::vector<int> tmp = std::vector<int>(_vec);
	std::sort(tmp.begin(), tmp.end());
	long span = -1;
	for (unsigned int i = 0; i < _vec.size() - 1; i++)
	{
		long diff = std::abs(tmp[i] - tmp[i + 1]);
		if (span == -1 || diff < span)
			span = diff;
	}
	if (span > std::numeric_limits<int>::max())
		throw OffLimitsException();
	return (static_cast<int>(span));
}

int Span::longestSpan()
{
	if (_vec.size() <= 1)
		throw NotEnoughException();
	int max = *std::max_element(_vec.begin(), _vec.end());
	int min = *std::min_element(_vec.begin(), _vec.end());
	unsigned int span = max - min;
	unsigned int max_int = std::numeric_limits<int>::max();
	if (span > max_int)
		throw OffLimitsException();
	else
		return (static_cast<int>(span));
}
