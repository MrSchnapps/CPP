/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:08:11 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/12 17:35:50 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim() {};

Victim::Victim(std::string name)
:	_name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim &copy)
:	_name(copy._name)
{}

Victim			&Victim::operator=(const Victim &op)
{
	if (this == &op)
		return (*this);
	_name = op._name;
	return (*this);
	
}

std::string		Victim::getName() const {return (_name);}

void			Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, Victim &vict)
{
	return(out << "I\'m " << vict.getName() << " and I like otters!" << std::endl);
}
		