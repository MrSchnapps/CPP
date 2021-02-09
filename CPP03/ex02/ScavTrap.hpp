/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 18:55:28 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/08 23:16:53 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
# include "ClapTrap.hpp"

class ScavTrap;

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap();
	
		unsigned int	rangedAttack(std::string const & target);
		unsigned int	meleeAttack(std::string const & target);

		void			challengeNewcomer(std::string name);

		void			print_infos(void);
		void			print_hello(void);
};
#endif