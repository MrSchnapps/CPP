/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:28:02 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/17 12:40:14 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &copy)
{
	(void)copy;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &op)
{
	(void)op;
	return (*this);
}

/*
** Other
*/

ISpaceMarine*	AssaultTerminator::clone () const
{
	return (new AssaultTerminator(*this));
}

void 			AssaultTerminator::battleCry () const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl; 
}

void 			AssaultTerminator::rangedAttack () const
{
	std::cout << "* does nothing *" << std::endl;
}

void 			AssaultTerminator::meleeAttack () const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}