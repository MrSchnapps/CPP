/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 22:02:20 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/09 23:22:37 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name)
: ClapTrap(), FragTrap(name), NinjaTrap(name)
{
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 120;
	this->_max_energy_points = 120;
	this->_level =  1;
	this->_name = name;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 30;
	this->_armor_damage_reduction = 5;

	std::cout << this->_name << " : Hello je suis Dieu." << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << this->_name << " : Even SuperTrap die one day..." << std::endl;
}

unsigned int	SuperTrap::rangedAttack(std::string name)
{
	return (FragTrap::rangedAttack(name));
}

unsigned int	SuperTrap::meleeAttack(std::string name)
{
	return (NinjaTrap::meleeAttack(name));
}

