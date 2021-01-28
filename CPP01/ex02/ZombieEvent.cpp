/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 13:31:38 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/28 10:15:14 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->type = "Normal";
}

ZombieEvent::ZombieEvent(std::string type)
{
	this->type = type;
}

ZombieEvent::~ZombieEvent() {};

void    ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(this->type, name));
}

Zombie	*ZombieEvent::randomChump()
{
	int			nb;
	Zombie		*zb;
	std::string str[9] = {"Ted", "Volt", "Archi", "Vixy", "Appa", "Souf",
							"Zip", "Feufeul", "Yuuk"};

	std::srand(std::time(nullptr));
	this->setZombieType("Chump");
	nb = rand()%8 + 0;
	zb = newZombie(str[nb]);
	zb->announce();
	return (zb);
}