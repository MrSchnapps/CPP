/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 13:31:35 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/28 20:04:02 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string type, std::string name);
		~Zombie();

		std::string	getType();
		std::string	getName();

		void		setType(std::string type);
		void		setName(std::string name);

		void		announce();

	private:
		std::string _type;
		std::string _name;
};
#endif