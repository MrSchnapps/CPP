/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:30:33 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/15 12:48:15 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

/*
** Constructor - Destructor - Copy
*/

PowerFist::PowerFist()
:	AWeapon("Power Fist", 8, 50)
{}

PowerFist::PowerFist(PowerFist const &copy)
:	AWeapon(copy.getName(), copy.getAPCost(), copy.getDamage())
{}

PowerFist::~PowerFist() {}

PowerFist &PowerFist::operator=(PowerFist &op)
{
	if (this == &op)
		return (*this);
	AWeapon::operator=(op);
	return (*this);
}

/*
** Other
*/

void		PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
