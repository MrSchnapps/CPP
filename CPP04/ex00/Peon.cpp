/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:07:09 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/12 17:35:10 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() {}

Peon::Peon(std::string name)
: Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon &copy)
: Victim(copy)
{}

Peon &Peon::operator=(Peon &op)
{
	if (this == &op)
		return (*this);
	Victim::operator=(op);
	return (*this);
}

void Peon::getPolymorphed() const
{
	std::cout << _name <<  " has been turned into a pink pony!" << std::endl;
}