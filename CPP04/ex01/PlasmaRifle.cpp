/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:01:07 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/15 12:48:10 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

/*
** Constructor - Destructor - Copy
*/

PlasmaRifle::PlasmaRifle()
:	AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy)
:	AWeapon(copy.getName(), copy.getAPCost(), copy.getDamage())
{}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle &op)
{
	if (this == &op)
		return (*this);
	AWeapon::operator=(op);
	return (*this);
}

/*
** Other
*/

void		PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
