/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 18:58:16 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/09 12:11:13 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 50;
	this->_max_energy_points = 50; 
	this->_level = 1;
	this->_name = name;
	this->_melee_attack_damage = 20;
	this->_ranged_attack_damage = 15;
	this->_armor_damage_reduction = 3;

	std::srand(std::time(NULL));
	this->print_hello();
	this->print_infos();
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << " : Je suis mort. Désolé... :D" << std::endl;	
}

void			ScavTrap::challengeNewcomer(std::string name)
{
	std::string list_chall[] {
								" saute par la fenêtre hihi",
								" rejoins l'Amérique à la nage stp :)",
								" compte jusqu'à 4",
								" compte jusqu'à 2147483647",
								" regarde ce tacos pendant 10h.",
								" giffle un poulet 100000 fois pour le cuire.",
								" regarde \"bim bam boum\" de Jujufitcats pendant 10h",
								" reste 48h enfermé seul(e) dans le noir",
								" prends le drive du McDo 100 fois."
	};

	if (this->_energy_points < 25)
		std::cout << "You don't have enough energy." << std::endl;
	else
	{
		std::cout << name << list_chall[rand()%9] << std::endl;
		this->_energy_points -= 25;
	}
}

/*
** Print
*/

void			ScavTrap::print_infos(void)
{
	std::cout << "---------------------" << std::endl;
	std::cout << "-       Infos       -" << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << this->_name << " : " << std::endl;
	std::cout << "Hp : " << this->_hit_points << std::endl;
	std::cout << "Energy : " << this->_energy_points << std::endl;
	std::cout << "Level : " << this->_level << std::endl;
	std::cout << std::endl;
}

void			ScavTrap::print_hello(void)
{
	std::cout << this->_name << " Bonsooiiirrr Pariiiiiiiissss" << std::endl;
}
