/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 13:31:30 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/28 09:57:16 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->_type = "Normal";
	this->_name = "Terry";
}

Zombie::Zombie(std::string type, std::string name) 
{
	this->_type = type;
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << "Deleting " << this->getName() << std::endl;
}

std::string	Zombie::getType() {return (this->_type);}	
std::string	Zombie::getName() {return (this->_name);}

void		Zombie::setType(std::string type)	{this->_type = type;}
void		Zombie::setName(std::string name)	{this->_name = name;}

void		Zombie::announce()
{
	std::cout << "<" << getName() << " (" << getType() << ")> Braiiiiiiinnnssss ..." << std::endl;
}