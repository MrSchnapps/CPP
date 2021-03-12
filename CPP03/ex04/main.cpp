/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 12:02:33 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/10 16:02:45 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int main()
{
	ClapTrap clap;
	ScavTrap scav("Asterix");
	FragTrap frag("Obelix");
	NinjaTrap ninj("Idefix");
	SuperTrap superman("Superman");

	superman.print_full_infos();
	std::cout << std::endl;
	superman.meleeAttack(scav.getName());
	superman.rangedAttack(frag.getName());
	superman.ninjaShoebox(ninj);
	superman.vaulthunter_dot_exe(frag.getName());

	std::cout << std::endl;

	/*ninj.ninjaShoebox(scav);
	ninj.ninjaShoebox(frag);
	ninj.ninjaShoebox(ninj);
	ninj.ninjaShoebox(clap);
	std::cout << std::endl;
	frag.takeDamage(scav.meleeAttack(frag.getName()));
	scav.takeDamage(frag.vaulthunter_dot_exe(scav.getName()));
	scav.challengeNewcomer(frag.getName());
	scav.challengeNewcomer(frag.getName());
	std::cout << std::endl;*/
	return (0);
}