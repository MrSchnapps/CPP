/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 12:09:52 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/09 21:58:00 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name)
{
	this->_hit_points = 60;
	this->_max_hit_points = 60;
	this->_energy_points = 120;
	this->_max_energy_points = 120; 
	this->_level = 1;
	this->_name = name;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 5;
	this->_armor_damage_reduction = 0;

	this->print_hello();
	this->print_infos();
}

NinjaTrap::~NinjaTrap()
{
	std::cout << this->_name << " : Un seul destin réuni tous les hommes : la mort." << std::endl;
}

void			NinjaTrap::ninjaShoebox(ClapTrap const &target)
{
	std::cout << "Wtf " << target.getName() << " ? Is it a parent of me ??" << std::endl;
}

void			NinjaTrap::ninjaShoebox(FragTrap  const &target)
{
	std::cout << "You look great " << target.getName() << " ! But not much as me :)" << std::endl;
}

void			NinjaTrap::ninjaShoebox(ScavTrap const &target)
{
	std::cout << target.getName() << " you are another copy of me.. " << std::endl;
}

void			NinjaTrap::ninjaShoebox(NinjaTrap const &target)
{
	std::cout << "N.Y.P.D.   " << this->getName() << " ====>  <==== " << target.getName() << std::endl;
}

void		NinjaTrap::print_hello(void)
{
	std::cout << "Ce que j'aime ce sont les ramens !" << std::endl;
	std::cout << "Ce que je déteste ce sont les 3 minutes d'attente avant de servir les ramens !" << std::endl;
	std::cout << "Mon passe temps favori c'est de comparer les bols  de ramens entre eux !" << std::endl;

}