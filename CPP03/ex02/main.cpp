/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 18:09:26 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/09 21:43:49 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	{
		FragTrap frag("Pippin");
		frag.print_full_infos();
	}
	{
		ScavTrap scav("Merry");
		scav.print_full_infos();
	}
	FragTrap frag("Sam");
	ScavTrap scav("Frodon");
	frag.takeDamage(scav.meleeAttack(frag.getName()));
	scav.takeDamage(frag.vaulthunter_dot_exe(scav.getName()));
	scav.challengeNewcomer(frag.getName());
	scav.challengeNewcomer(frag.getName());
	std::cout << std::endl;
	return (0);
}