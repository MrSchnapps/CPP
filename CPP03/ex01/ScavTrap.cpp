/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 18:58:16 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/10 16:16:53 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
: 
	_hit_points(100),
	_max_hit_points(100),
	_energy_points(50),
	_max_energy_points(50),
	_level(1),
	_name(name),
	_melee_attack_damage(20),
	_ranged_attack_damage(15),
	_armor_damage_reduction(3)
{
	std::srand(std::time(NULL));
	this->print_hello();
	this->print_infos();
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << " : Je suis mort. Désolé... :D" << std::endl;	
}

std::string		ScavTrap::getName(void) const {return (this->_name);}

unsigned int	ScavTrap::rangedAttack(std::string const & target)
{
	if (this->_hit_points > 0)
	{
		std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_attack_damage << " points of damage !" << std::endl;
		if (this->_energy_points < this->_max_energy_points)
		{
			unsigned int nrg = 5;
			if (this->_energy_points + nrg > this->_max_energy_points)
				nrg = this->_max_energy_points - this->_energy_points;
			this->_energy_points += nrg;
			std::cout << "You recover " << nrg << " energy points." << std::endl;
		}
		return (this->_ranged_attack_damage);
	}
	else
	{
		std::cout << "You must be repaired before you can attack" << std::endl;
		return (0);
	}
}

unsigned int	ScavTrap::meleeAttack(std::string const & target)
{
	if (this->_hit_points > 0)
	{
		std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_melee_attack_damage << " points of damage !" << std::endl;
		if (this->_energy_points < this->_max_energy_points)
		{
			unsigned int nrg = 3;
			if (this->_energy_points + nrg > this->_max_energy_points)
				nrg = this->_max_energy_points - this->_energy_points;
			this->_energy_points += nrg;
			std::cout << "You recover " << nrg << " energy points." << std::endl;
		}
		return (this->_melee_attack_damage);
	}
	else
	{
		std::cout << "You must be repaired before you can attack" << std::endl;
		return (0);
	}
}

void			ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points == 0)
		std::cout << "You can't attack an ennemi on the ground :/" << std::endl;
	else if (amount <= this->_armor_damage_reduction)
		std::cout << "Vous ne passerez pas !!!" << std::endl;
	else
	{
		unsigned int true_dmg = amount - this->_armor_damage_reduction;
		
		if (true_dmg > this->_hit_points)
		{
			true_dmg = this->_hit_points;
			this->_hit_points = 0;
		}
		else
			this->_hit_points -= true_dmg;
		std::cout << "OUH ! " << this->_name << " took " << true_dmg << " damages points!" << std::endl;
		std::cout << std::endl;
		if (this->_hit_points == 0)
			std::cout << "F" << std::endl;
	}
}

void			ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "Santé Marion !!" << std::endl;
	if (this->_hit_points == this->_max_hit_points)
		std::cout << "Your hp are already at the maximum." << std::endl;
	else
	{
		this->_hit_points += amount;
		if (this->_hit_points > this->_max_hit_points)
		{
			this->_hit_points = this->_max_hit_points;
			std::cout << "You have fully recovered your life." << std::endl;
		}
		else
			std::cout << "You have recovered " << amount << " hp." << std::endl;
	}
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
