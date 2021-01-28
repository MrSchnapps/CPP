/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:34:18 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/21 11:07:31 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
	this->name = "Little Tonnerre";
	this->color = "Silver";
}

Pony::Pony(std::string name, std::string color)
{
	this->name = name;
	this->color = color;
}

Pony::~Pony()
{
	std::cout << "Bye bye Pony" << std::endl;
}

void		Pony::setName(std::string name)		{this->name = name;}
void		Pony::setColor(std::string color)	{this->color = color;}

std::string	Pony::getName(void)					{return (this->name);}
std::string	Pony::getColor(void)				{return (this->color);}

void		Pony::neigh()
{
	std::cout << "HuuuHHUuuuuuUHHUUuHuhuHUHU" << std::endl;
}

void		Pony::sayMyName()
{
	std::cout << "Hello my name is " + getName() << std::endl;
}