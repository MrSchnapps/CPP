/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 21:52:50 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/17 22:03:54 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
: AMateria("cure")
{}

Cure::Cure(const Cure &copy)
: AMateria("cure")
{}

Cure::~Cure()
{}

Cure &Cure::operator=(const Cure &op)
{	
	if (this == &op)
		return (*this);
	_xp = op.getXP();
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals "<< target.getName() << "'s wounds *" << std::endl;
}
