/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Gremlins.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:09:10 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/18 12:10:15 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Gremlins.hpp"

Gremlins::Gremlins() {}

Gremlins::Gremlins(std::string name)
: Victim(name)
{
	std::cout << "Bruik bruik." << std::endl;
}

Gremlins::~Gremlins()
{
	std::cout << "Bleeeeee..." << std::endl;
}

Gremlins::Gremlins(const Gremlins &copy)
: Victim(copy)
{}

Gremlins &Gremlins::operator=(Gremlins &op)
{
	if (this == &op)
		return (*this);
	Victim::operator=(op);
	return (*this);
}

void Gremlins::getPolymorphed() const
{
	std::cout << _name <<  " has been turned into a Gremlins pony!" << std::endl;
}