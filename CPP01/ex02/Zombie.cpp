/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 13:31:30 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/22 15:32:22 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->type = "Normal";
	this->name = "Terry";
}

Zombie::Zombie(std::string type, std::string name) 
{
	this->type = type;
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << "Deleting " << this->getName() << std::endl;
}

std::string	Zombie::getType() {return (this->type);}	
std::string	Zombie::getName() {return (this->name);}

void		Zombie::setType(std::string type)	{this->type = type;}
void		Zombie::setName(std::string name)	{this->name = name;}

void		Zombie::announce()
{
	std::cout << "<" << getName() << " (" << getType() << ")> Braiiiiiiinnnssss ..." << std::endl;
}