/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 09:45:35 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/28 13:46:46 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <cstdlib>
# include <ctime>

class ZombieHorde {
	public:
		ZombieHorde(int n);
		~ZombieHorde();
		int		getNb();
		void	setNb(int nb);
		void	announce();	

	private:
		int		_nb;
		Zombie	*_zombies;
};
#endif