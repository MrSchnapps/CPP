/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 12:09:46 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/10 15:44:11 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __NINJATRAP_HPP__
# define __NINJATRAP_HPP__

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap;

class NinjaTrap : public ClapTrap
{
	public :
		NinjaTrap(std::string name);
		~NinjaTrap();

		void			ninjaShoebox(ClapTrap const &target);
		void			ninjaShoebox(FragTrap const &target);
		void			ninjaShoebox(ScavTrap const &target);
		void			ninjaShoebox(NinjaTrap const &target);

		void			print_hello(void);

};

#endif