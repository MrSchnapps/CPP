/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 23:12:07 by judecuyp          #+#    #+#             */
/*   Updated: 2021/03/12 00:33:32 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
**	Constructor - Destructor - Copy
*/

Span::Span(unsigned int const &size)
: _size(size)
{
	_stock.reserve(size);
	std::cout << "A new span was created" << std::endl;
}

Span::Span(const Span &copy)
{
	std::cout << "A new span was created with copy constructor" << std::endl;
	_size = copy.getSize();
	_stock = copy.getStock();
}

Span::~Span() {}

Span &Span::operator=(Span &op)
{
	std::cout << "A new span was created with operator =" << std::endl;
	if (this == &op)
		return (*this);
	_size = op.getSize();
	_stock = op.getStock();
	return (*this);
}

/*
** Getter - Setter
*/

unsigned int		Span::getSize() const {return (_size);}
std::vector<int>	Span::getStock() const {return(_stock);}

/*
** Other
*/

void		Span::addNumber(int nb)
{
	try
	{
		if (_stock.size() < _size)
			_stock.push_back(nb);
		else
			throw StockFullException();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

long			Span::shortestSpan()
{
	long ret;

	if (_stock.size() <= 1)
		throw NoSpanException();
	std::sort(_stock.begin(), _stock.end());
	ret = _stock[1] - _stock[0];
	for (unsigned long i = 2; i < _stock.size(); i++)
	{
		if (_stock[i] - _stock[i - 1] < ret)
			ret = _stock[i] - _stock[i - 1];
	}
	return (ret);
}

long			Span::longestSpan()
{
	long	ret;

	if (_stock.size() <= 1)
		throw NoSpanException();
	std::sort(_stock.begin(), _stock.end());
	ret = _stock.back() - _stock.front();
	return (ret);
}

void			Span::addMostNumbers(int min, int max)
{
	for (; min < max; min++)
	{
		addNumber(min);
	}	
}

/*
** Exception
*/

const char	*Span::StockFullException::what() const throw()
{
	return("Stock is full.");
}


const char	*Span::NoSpanException::what() const throw()
{
	return("Stock size is too small for a span.");
}