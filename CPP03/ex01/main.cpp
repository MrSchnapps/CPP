/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 09:12:12 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/05 09:27:29 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap winnie("Winnie");
	FragTrap bouriquet("Bouriquet");

	winnie.takeDamage(bouriquet.meleeAttack(winnie.getName()));
	winnie.challengeNewcomer(bouriquet.getName());
	std::cout << std::endl;
	winnie.challengeNewcomer(bouriquet.getName());
	std::cout << std::endl;
	winnie.challengeNewcomer(bouriquet.getName());
	std::cout << std::endl;
	return (0);
}