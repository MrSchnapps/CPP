/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Goblin.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:40:41 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/12 17:41:26 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Goblin.hpp"

Goblin::Goblin() {}

Goblin::Goblin(std::string name)
: Victim(name)
{
	std::cout << "Zug zug." << std::endl;
}

Goblin::~Goblin()
{
	std::cout << "Blauerk..." << std::endl;
}

Goblin::Goblin(const Goblin &copy)
: Victim(copy)
{}

Goblin &Goblin::operator=(Goblin &op)
{
	if (this == &op)
		return (*this);
	Victim::operator=(op);
	return (*this);
}

void Goblin::getPolymorphed() const
{
	std::cout << _name <<  " has been turned into a green pony!" << std::endl;
}