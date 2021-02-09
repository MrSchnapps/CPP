/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 18:09:26 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/08 23:18:10 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	{
		FragTrap clap("Pippin");
		clap.print_full_infos();
	}
	{
		ScavTrap scav("Merry");
		scav.print_full_infos();
	}
	FragTrap clap("Sam");
	ScavTrap scav("Frodon");
	clap.takeDamage(scav.meleeAttack(clap.getName()));
	scav.takeDamage(clap.vaulthunter_dot_exe(scav.getName()));
	scav.challengeNewcomer(clap.getName());
	scav.challengeNewcomer(clap.getName());
	std::cout << std::endl;
	return (0);
}