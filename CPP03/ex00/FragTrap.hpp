/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:05:32 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/04 14:58:54 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class FragTrap;

typedef unsigned int (FragTrap::*list_attack)(std::string name);

class FragTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap();

		std::string		getName(void) const;
	
		unsigned int	rangedAttack(std::string const & target);
		unsigned int	meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		unsigned int	vaulthunter_dot_exe(std::string const & target);

		void			print_infos(void);
		void			print_hello(void);

	private:
		unsigned int	_hit_points;
		unsigned int	_max_hit_points;
		unsigned int	_energy_points;
		unsigned int	_max_energy_points;
		unsigned int 	_level;
		std::string 	_name;
		unsigned int	_melee_attack_damage;
		unsigned int	_ranged_attack_damage;
		unsigned int	_armor_damage_reduction;

		list_attack		list[5];		

		unsigned int	bondcoco(std::string name);
		unsigned int	gumgumno(std::string name);
		unsigned int	omaewa(std::string name);
		unsigned int	multiclonageJutsu(std::string name);
		unsigned int	avadakedavra(std::string name);
};

#endif