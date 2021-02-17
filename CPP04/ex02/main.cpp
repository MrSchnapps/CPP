/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:34:29 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/17 14:16:15 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#define UNITS 50

int main()
{
	std::cout << "===========================PDF MAIN TEST=======================================" << std::endl;

	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	
	std::cout << "=================================DEEP COPY TEST=======================================" << std::endl;
	
	ISpaceMarine* t = new TacticalMarine;
	ISpaceMarine* a = new AssaultTerminator;
	{
		Squad grp;
		
		grp.push(t);
		grp.push(a);
		{
			Squad grp2(grp);
		}
	}

	std::cout << "=================================FUNCTIONNAL TEST=======================================" << std::endl;
	ISquad *sqd = new Squad;
	
	ISpaceMarine* tactical = new TacticalMarine;
	ISpaceMarine* assault = new AssaultTerminator;
	
	std::cout << "              basic count size squad  : " << sqd->getCount() << std::endl;
	sqd->push(tactical);
	std::cout << "              tactical add size squad : " << sqd->getCount() << std::endl;
	sqd->push(assault);
	std::cout << "               assault add size squad : " << sqd->getCount() << std::endl;
	
	sqd->push(tactical);
	std::cout << "same tactical add (errorr) size squad : " << sqd->getCount() << std::endl;
	sqd->push(NULL);
	std::cout << "          NULL add (error) size squad : " << sqd->getCount() << std::endl;

	std::cout << "get unit -1         -> " << sqd->getUnit(-1) << std::endl;
	std::cout << "get unit 3 (size 2) -> " << sqd->getUnit(3) << std::endl;

	delete sqd;

	return 0;
}
