/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 13:31:45 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/28 18:46:41 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	Zombie		*zb;
	ZombieEvent	zb_ev;

	if (1) // I create a scope for my zombie
	{
		Zombie zombie_stack("Big", "Francky");
		zombie_stack.announce();
	}
	zb_ev.setZombieType("Shiny");
	zb = zb_ev.newZombie("Terry");
	zb->announce();
	delete zb;
	zb = zb_ev.randomChump();
	delete zb;


	return (0);
}