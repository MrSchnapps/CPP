/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:34:29 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/18 14:31:07 by judecuyp         ###   ########.fr       */
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
	std::cout << std::endl;
	{
		Squad grp;
		
		grp.push(t);
		grp.push(a);
		{
			Squad grp2(grp);
		}
		std::cout << std::endl;
		std::cout << "========= grp 3 =  grp ======" << std::endl;
		Squad grp3 = grp;
		
		Squad grp4;
		ISpaceMarine* t2 = new TacticalMarine;
		ISpaceMarine* a2 = new AssaultTerminator;
		grp4.push(t2);
		grp4.push(a2);

		std::cout << std::endl;
		std::cout << "========= grp 3 =  grp4 ======" << std::endl;
		grp3 = grp4;
		std::cout << std::endl;
	}
	std::cout << "=================================FUNCTIONNAL TEST=======================================" << std::endl;
	ISquad *sqd = new Squad;
	
	ISpaceMarine* tactical = new TacticalMarine;
	ISpaceMarine* assault = new AssaultTerminator;

	std::cout << "             basic count size squad  : " << sqd->getCount() << std::endl;
	sqd->push(tactical);
	std::cout << "             tactical add size squad : " << sqd->getCount() << std::endl;
	sqd->push(assault);
	std::cout << "              assault add size squad : " << sqd->getCount() << std::endl;
	
	sqd->push(tactical);
	std::cout << "same tactical add (error) size squad : " << sqd->getCount() << std::endl;
	sqd->push(NULL);
	std::cout << "         NULL add (error) size squad : " << sqd->getCount() << std::endl;

	std::cout << "get unit -1         -> " << sqd->getUnit(-1) << std::endl;
	std::cout << "get unit 3 (size 2) -> " << sqd->getUnit(3) << std::endl;

	delete sqd;

	return 0;
}
