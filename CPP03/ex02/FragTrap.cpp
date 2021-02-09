/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:05:35 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/08 23:16:44 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_name = name;
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5; 

	this->list[0] = &FragTrap::bondcoco;
	this->list[1] = &FragTrap::gumgumno;
	this->list[2] = &FragTrap::omaewa;
	this->list[3] = &FragTrap::multiclonageJutsu;
	this->list[4] = &FragTrap::avadakedavra;

	std::srand(std::time(NULL));
	this->print_hello();
	this->print_infos();
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << " : Je ne mourrais pas tu verras vieille branche! (Si.)" << std::endl;	
}

unsigned int	FragTrap::rangedAttack(std::string const & target)
{
	if (this->_hit_points > 0)
	{
		std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_attack_damage << " points of damage !" << std::endl;
		if (this->_energy_points < this->_max_energy_points)
		{
			unsigned int nrg = 5;
			if (this->_energy_points + nrg > this->_max_energy_points)
				nrg = (this->_energy_points + nrg) - this->_max_energy_points;
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

unsigned int	FragTrap::meleeAttack(std::string const & target)
{
	if (this->_hit_points > 0)
	{
		std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_melee_attack_damage << " points of damage !" << std::endl;
		if (this->_energy_points < this->_max_energy_points)
		{
			unsigned int nrg = 5;
			if (this->_energy_points + nrg > this->_max_energy_points)
				nrg = (this->_energy_points + nrg) - this->_max_energy_points;
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

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_energy_points < 25)
	{
		std::cout << "You don't have enough energy." << std::endl;
		return (0);
	}
	else
	{
		unsigned int ret = (this->*list[rand()%5])(target);
		this->_energy_points -= 25;
		return (ret);
	}
}

/*
** Alea functions
*/

unsigned int	FragTrap::bondcoco(std::string name)
{
	std::cout << this->_name << " lance bond." << std::endl;
	std::cout << this->_name << " lance colère d'iop." << std::endl;
	std::cout << name << " -6521 pv." << std::endl;
	std::cout << name << " est (normalement) mort." << std::endl;
	return (99);
}

unsigned int	FragTrap::gumgumno(std::string name)
{
	std::cout << "Gomu gomu nooooooooo gatling guunn" << std::endl;
	std::cout << "Boum boum boub boum boum boum boum boum boum" << std::endl;
	std::cout << name << " : Aie aie aie aie aie aie aie aie aie" << std::endl;
	return (70);
}

unsigned int	FragTrap::omaewa(std::string name)
{
	std::cout << "OMAE WA MOU SHINDEIRU" << std::endl;
	std::cout << name << " : NANI \?\?!!?!" << std::endl;
	return (50);
}

unsigned int	FragTrap::multiclonageJutsu(std::string name)
{
	for (int i = 0; i < 6; i++)
		print_hello();
	std::cout << name << " : omg c lequel ???" << std::endl;
	return (6);
}

unsigned int	FragTrap::avadakedavra(std::string name)
{
	std::cout << "Avada Kedavra --> T mort." << std::endl;
	std::cout << name << " : ah je suis mort" << std::endl;
	return (100);
}

/*
** Print
*/

void			FragTrap::print_infos(void)
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

void			FragTrap::print_hello(void)
{
	std::cout << this->_name << " : " << std::endl;
	std::cout << "Yo les gens, salut à tous, as-salam alaykoum à tous mes frères et bienvenue sur ma chaine youtube." << std::endl;
	std::cout << "Donc aujourd'hui les gars on se retrouve pour une nouvelle vidéo, pas de Call of Duty malheureusement..." << std::endl;
}
