/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 18:55:28 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/04 19:16:49 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class ScavTrap;

class ScavTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap();

		std::string		getName(void) const;
	
		unsigned int	rangedAttack(std::string const & target);
		unsigned int	meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		void			challengeNewcomer(std::string name);

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
};
#endif