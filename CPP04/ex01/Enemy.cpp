/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:36:21 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/15 14:00:58 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

/*
** Constructor - Destructor - Copy
*/

Enemy::Enemy() {}

Enemy::Enemy(int hp, std::string const & type)
:	_hp(hp),
	_type(type)
{}

Enemy::~Enemy(){}

Enemy::Enemy(Enemy &copy)
:	_hp(copy.getHP()),
	_type(copy.getType())
{}

Enemy &Enemy::operator=(Enemy &op)
{
	if (this == &op)
		return (*this);
	this->_hp = op.getHP();
	this->_type = op.getType();
	return (*this);
}

/*
** Getter - Setter
*/

std::string const	Enemy::getType() const {return (this->_type);};
int 				Enemy::getHP() const {return (this->_hp);};

/*
** Other
*/

void 				Enemy::takeDamage(int amount)
{
	if (amount <= 0)
		return ;
	if (_hp - amount < 0)
		amount = _hp;
	_hp -= amount;
}