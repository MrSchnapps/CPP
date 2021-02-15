/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:10:15 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/15 15:37:50 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** Constructor - Destructor - Copy
*/

Character::Character() {}

Character::Character(std::string const & name)
:	_name(name),
	_ap(40),
	_weapon(nullptr)
{}

Character::Character(Character &copy)
:	_name(copy.getName()),
	_ap(copy.getAP()),
	_weapon(copy.getWeapon())
{}

Character::~Character() {}

Character &Character::operator=(Character &op)
{
	if (this == &op)
		return (*this);
	this->_name = op.getName();
	this->_ap = op.getAP();
	this->_weapon = op.getWeapon();
	return (*this);
}

/*
** Getter -  Setter
*/

std::string const	Character::getName() const {return (_name);}
int					Character::getAP() const {return (_ap);}
AWeapon				*Character::getWeapon() const {return (_weapon);}

/*
** Other
*/

void Character::recoverAP()
{
	if (_ap < 40)
	{
		if (_ap + 10 > 40)
			_ap = 40;
		else
			_ap += 10;
	}
}

void Character::equip(AWeapon* weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
	if (_weapon == nullptr)
		return ;
	if (_ap < _weapon->getAPCost())
		std::cout << "Not enough AP." << std::endl;
	else
	{
		std::cout << _name << " attacks " << enemy->getType() <<  " with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		enemy->takeDamage(_weapon->getDamage());
		if (enemy->getHP() < 1)
			delete enemy;
		_ap -= _weapon->getAPCost();	
	}
}

std::ostream &operator<<(std::ostream &out, const Character  &charac)
{
	if (charac.getWeapon() == nullptr)
		out << charac.getName() << " has " << charac.getAP() << " AP and is unarmed" << std::endl;
	else
		out << charac.getName() << " has " << charac.getAP() << " AP and wields a " << charac.getWeapon() << std::endl;
	return (out);
}

