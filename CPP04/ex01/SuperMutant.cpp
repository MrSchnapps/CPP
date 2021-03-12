/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:54:59 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/15 15:44:50 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

/*
** Constructor - Destructor - Copy
*/

SuperMutant::SuperMutant()
:	Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &copy)
:	Enemy(copy.getHP(), copy.getType())
{}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant	&SuperMutant::operator=(SuperMutant &op)
{
	if (this == &op)
		return (*this);
	Enemy::operator=(op);
	return (*this);
}

/*
** Other
*/

void		SuperMutant::takeDamage(int amount)
{
	amount -= 3;
	Enemy::takeDamage(amount);
}