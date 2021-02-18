/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 22:38:35 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/18 00:21:30 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** Constructor - Destructor - Copy
*/

Character::Character() {}

Character::Character(std::string const &name)
:	_name(name),
	_materia_equiped(0)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &copy)
:	_name(copy.getName())
{
	for (int i = 0; i < _materia_equiped; i++)
		delete _inventory[i];
	_materia_equiped = 0;
	for (int i = 0; i < copy.getMateriaEquiped(); i++)
		equip(copy.getMateria(i)->clone());
	for (int i = copy.getMateriaEquiped(); i < 4; i++)
		_inventory[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < _materia_equiped; i++)
		delete _inventory[i];
}

Character &Character::operator=(const Character &op)
{
	if (this == &op)
		return (*this);
	_name = op.getName();
	for (int i = 0; i < _materia_equiped; i++)
		delete _inventory[i];
	_materia_equiped = 0;
	for (int i = 0; i < op.getMateriaEquiped(); i++)
		 equip(op.getMateria(i)->clone());
	for (int i = op.getMateriaEquiped(); i < 4; i++)
		_inventory[i] = NULL;
	return (*this);
}

/*
** Getter
*/

std::string const	&Character::getName() const {return (_name);}
int					Character::getMateriaEquiped() const {return (_materia_equiped);}
AMateria*			Character::getMateria(int nb ) const
{
	if (nb < 0 || nb >= getMateriaEquiped())
		return (NULL);
	return (_inventory[nb]);
}


/*
** Other
*/

void				Character::equip(AMateria* m)
{
	if (!m || _materia_equiped == 4)
		return ;
	for (int i = 0; i < _materia_equiped; i++)
		if (_inventory[i] == m)
			return ;
	_inventory[_materia_equiped] = m;
	_materia_equiped++;
}

void 				Character::unequip(int idx)
{
	if (idx < 0 || idx >= _materia_equiped || !_inventory[idx])
		return ;
	if (idx == 3)
		_inventory[idx] = NULL;
	else
	{
		for (int i = idx; i < 3; i++)
		{
			_inventory[i] = _inventory[i + 1];
			_inventory[i + 1] = NULL;
		}
	}
}

void 				Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= _materia_equiped || !_inventory[idx])
		return ;
	_inventory[idx]->use(target);
}
