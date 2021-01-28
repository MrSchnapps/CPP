/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 13:31:40 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/28 10:09:05 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <cstdlib>
# include <ctime>

class ZombieEvent
{
	public:
		ZombieEvent();
		ZombieEvent(std::string type);
		~ZombieEvent();

		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
		Zombie  *randomChump();

	private:
		std::string type;
};
#endif