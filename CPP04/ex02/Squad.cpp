/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:22:58 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/17 22:54:11 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
/*
** Constructor - Destructor - Copy
*/

Squad::Squad()
:	_members(NULL),
	_count_members(0)
{}

Squad::Squad(Squad &copy)
:	_members(NULL),
	_count_members(0)
{
	if (copy.getCount() > 0)
	{
		del_squad();
		for (int i = 0; i < copy.getCount(); i++)
		{
			std::cout << i << std::endl;
			push(copy.getUnit(i)->clone());
		}
	}
}

Squad::~Squad()
{
	del_squad();
}

Squad &Squad::operator=(Squad &op)
{
	if (this == &op)
		return (*this);
	if (op.getCount() > 0)
		del_squad();
	for (int i = 0; i < op.getCount(); i++)
		push(op.getUnit(i)->clone());
	return (*this);
}

/*
** Other
*/

int				Squad::getCount() const { return (_count_members);}

ISpaceMarine*	Squad::getUnit(int nb) const 
{
	if (nb < 0 || nb >= _count_members)
		return (NULL);
	return (_members[nb]);
}

int				Squad::push(ISpaceMarine* unit)
{
	if (!unit)
		return (_count_members);
	if (_members)
	{
		for (int i = 0; i < _count_members; i++)
			if (_members[i] == unit)
				return (_count_members);
		ISpaceMarine **copy = new ISpaceMarine*[_count_members + 1];
		int i = 0;
		while (i < _count_members)
		{
			copy[i] = _members[i];
			i++;
		}
		copy[i] = unit;
		delete[] _members;
		_members = copy;
		_count_members += 1;
	}
	else
	{
		_members = new ISpaceMarine*[1];
		_members[0] = unit;
		_count_members += 1;
	}
	return (_count_members);
	
}

void			Squad::del_squad()
{
	if (_members)
	{
		for (int i = 0; i < _count_members; i++)
			delete _members[i];
		delete[] _members;
	}	
}