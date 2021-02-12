/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:08:19 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/12 17:36:09 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __VICTIM_HPP__
# define __VICTIM_HPP__

# include <iostream>
# include <string>

class Victim;

class Victim
{
	public:
		Victim(std::string name);
		virtual~Victim();
		Victim(const Victim &copy);
		Victim &operator=(const Victim &op);

		std::string		getName() const;

		virtual void	getPolymorphed() const;

	protected:
		Victim();

		std::string _name;
};

#endif

std::ostream	&operator<<(std::ostream &out, Victim &vict);