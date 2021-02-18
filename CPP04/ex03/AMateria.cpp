/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:34:32 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/18 00:18:18 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** Constructor - Destructor - Copy
*/

AMateria::AMateria() {}

AMateria::AMateria(std::string const & type)
:	_xp(0),
	_type(type)
{}

AMateria::AMateria(AMateria &copy)
:	_xp(copy.getXP()),
	_type(copy.getType())
{}

AMateria::~AMateria()
{}

AMateria &AMateria::operator=(AMateria &op)
{
	if (this == &op)
		return (*this);
	_xp = op.getXP();
	_type = op.getType();
	return (*this);
}

/*
** Getter - Setter
*/

std::string const	&AMateria::getType() const {return (_type);}

unsigned int		AMateria::getXP() const {return (_xp);}

/*
** Other
*/

void				AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}
