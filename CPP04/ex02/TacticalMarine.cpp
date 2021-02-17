/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:39:07 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/17 12:25:17 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

/*
** Constructor - Destructor - Copy
*/

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &copy)
{
	(void)copy;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &op)
{
	(void)op;
	return (*this);
}

/*
** Other
*/

ISpaceMarine*	TacticalMarine::clone () const
{
	return (new TacticalMarine(*this));
}

void 			TacticalMarine::battleCry () const
{
	std::cout << "For the holy PLOT!" << std::endl; 
}

void 			TacticalMarine::rangedAttack () const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void 			TacticalMarine::meleeAttack () const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
