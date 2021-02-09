/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 22:02:45 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/09 23:11:32 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SUPERTRAP_HPP__
# define __SUPERTRAP_HPP__

# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(std::string name);
		~SuperTrap();

		unsigned int	rangedAttack(std::string name);
		unsigned int	meleeAttack(std::string name);

		void			print_hello(void);
};

#endif