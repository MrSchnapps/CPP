/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 18:20:13 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/08 23:26:30 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
: 
	_hit_points(0),
	_max_hit_points(0),
	_energy_points(0),
	_max_energy_points(0),
	_level(0),
	_name(),
	_melee_attack_damage(0),
	_ranged_attack_damage(0),
	_armor_damage_reduction(0)
{
	std::cout << "A new ClapTrap has been created." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "The ClapTrap has been destroyed." << std::endl;
}

std::string		ClapTrap::getName(void) const {return (this->_name);}

void			ClapTrap::takeDamage(unsigned int amount)
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

void			ClapTrap::beRepaired(unsigned int amount)
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

void	ClapTrap::print_full_infos(void)
{
	std::cout << "-------------------------" << std::endl;
	std::cout << "-       Full Infos       -" << std::endl;
	std::cout << "-------------------------" << std::endl;
	std::cout << this->_name << " : " << std::endl;
	std::cout << "Hp : " << this->_hit_points << std::endl;
	std::cout << "Hp max : " << this->_max_hit_points << std::endl;
	std::cout << "Energy : " << this->_energy_points << std::endl;
	std::cout << "Energy max : " << this->_max_energy_points << std::endl;
	std::cout << "Level : " << this->_level << std::endl;
	std::cout << "Melee : " << this->_melee_attack_damage << std::endl;
	std::cout << "Ranged : " << this->_ranged_attack_damage << std::endl;
	std::cout << "Armor : " << this->_armor_damage_reduction << std::endl;
	std::cout << "__________________________" << std::endl;
	std::cout << std::endl;
}