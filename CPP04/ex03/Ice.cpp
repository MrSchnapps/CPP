/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 21:35:20 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/18 00:19:49 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
: AMateria("ice")
{}

Ice::Ice(const Ice &copy)
: AMateria("ice")
{
	_xp = copy.getXP();
}

Ice::~Ice()
{}

Ice &Ice::operator=(const Ice &op)
{	
	if (this == &op)
		return (*this);
	_xp = op.getXP();
	return (*this);
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
