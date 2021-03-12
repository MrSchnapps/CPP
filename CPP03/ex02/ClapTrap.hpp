/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 18:20:10 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/10 14:55:31 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

# include <iostream>
# include <string>

class ClapTrap;

class ClapTrap
{
	public:
		ClapTrap();
		~ClapTrap();

		std::string		getName(void) const;

		unsigned int	rangedAttack(std::string const & target);
		unsigned int	meleeAttack(std::string const & target);

		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		void			print_full_infos(void);

	protected:
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