/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:05:32 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/09 22:22:03 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

# include <cstdlib>
# include <ctime>
# include "ClapTrap.hpp"

class FragTrap;

typedef unsigned int (FragTrap::*list_attack)(std::string name);

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap();

		unsigned int	vaulthunter_dot_exe(std::string const & target);

		void			print_hello(void);

	private:
		list_attack		list[5];		

		unsigned int	bondcoco(std::string name);
		unsigned int	gumgumno(std::string name);
		unsigned int	omaewa(std::string name);
		unsigned int	multiclonageJutsu(std::string name);
		unsigned int	avadakedavra(std::string name);
};

#endif