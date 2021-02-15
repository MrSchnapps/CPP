/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 10:46:47 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/15 12:48:04 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

/*
** Constructor - Destructor - Copy
*/

AWeapon::AWeapon() {}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
:	_name(name),
	_apcost(apcost),
	_damage(damage)
{} 

AWeapon::~AWeapon(){}

AWeapon::AWeapon(AWeapon &copy)
:	_name(copy.getName()),
	_apcost(copy.getAPCost()),
	_damage(copy.getDamage())
{}

AWeapon &AWeapon::operator=(AWeapon &op)
{
	if (this == &op)
		return (*this);
	this->_name = op.getName();
	this->_apcost = op.getAPCost();
	this->_damage = op.getDamage();
	return (*this);
}

/*
** Getter - Setter
*/

std::string const	AWeapon::getName() const {return(this->_name);}
int 				AWeapon::getAPCost() const {return(this->_apcost);}
int					AWeapon::getDamage() const {return(this->_damage);}
