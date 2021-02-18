/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 23:40:28 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/18 10:55:08 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** Constructor - Destructor - Copy
*/

MateriaSource::MateriaSource()
:	_size_list(0)
{
	for (int i = 0; i < 4; i++)
		_list[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource &copy)
{
	for (int i = 0; i < copy._size_list; i++)
		delete _list[i];
	_size_list = 0;
	for (int i = 0; i < copy.getSizeList(); i++)
		learnMateria(copy.getMateria(i)->clone());
	for (int i = copy.getSizeList(); i < 4; i++)
		_list[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	//std::cout << "test" << std::endl;
	for (int i = 0; i < _size_list; i++)
			delete _list[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource &op)
{
	if (this == &op)
		return (*this);
	for (int i = 0; i < op._size_list; i++)
		delete _list[i];
	_size_list = 0;
	for (int i = 0; i < op.getSizeList(); i++)
		learnMateria(op.getMateria(i)->clone());
	for (int i = op.getSizeList(); i < 4; i++)
		_list[i] = NULL;
	return (*this);
}

/*
** Getter
*/

AMateria* 	MateriaSource::getMateria(int nb) const {return (_list[nb]);}
int			MateriaSource::getSizeList() const {return (_size_list);}

/*
** Other
*/

void		MateriaSource::learnMateria(AMateria* m)
{
	if (!m || _size_list == 4)
		return ;
	for (int i = 0; i < _size_list; i++)
		if (_list[i] == m)
			return ;
	_list[_size_list] = m;
	_size_list++;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _size_list; i++)
		if (_list[i]->getType() == type)
			return (_list[i]->clone());
	return (NULL);
}
