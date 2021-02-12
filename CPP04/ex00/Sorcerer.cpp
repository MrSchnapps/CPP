/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:00:26 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/12 17:33:25 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {}

Sorcerer::Sorcerer(std::string name, std::string title)
:	_name(name),
	_title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy)
:	_name(copy._name),
	_title(copy._title)
{}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer		&Sorcerer::operator=(const Sorcerer &op)
{
	if (this == &op)
		return (*this);
	this->_name = op._name;
	this->_title = op._title;
	return (*this);
}

std::string		Sorcerer::getName(void) const {return (_name);}
std::string		Sorcerer::getType(void) const {return (_title);}


void			Sorcerer::polymorph(Victim const & vict) const
{
	vict.getPolymorphed();
}

std::ostream	&operator<<(std::ostream &out, const Sorcerer &sorc)
{
	return (out << "I am " << sorc.getName() << ", " << sorc.getType() << ", and I like ponies!" << std::endl);
	
}