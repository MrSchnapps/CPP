/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 15:33:02 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/15 17:21:23 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

int main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << "===========================================================================================" << std::endl;

	Enemy *mut = new SuperMutant();
	me->attack(mut);
	std::cout << *me;
	me->attack(mut);
	std::cout << *me;
	me->attack(mut);
	std::cout << *me;
	me->attack(mut);
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	delete mut;
	delete pr;
	delete pf;
	delete me;
	return 0;
}