/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:00:30 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/12 17:33:30 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SORCERER_HPP__
# define __SORCERER_HPP__

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer;

class Sorcerer
{
	public :
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer &copy);
		virtual ~Sorcerer();
		Sorcerer &operator=(const Sorcerer &op);

		std::string		getName(void) const;
		std::string		getType(void) const;

		void polymorph(Victim const &vict) const;

	private :
		Sorcerer();

		std::string _name;
		std::string _title;
};

std::ostream &operator<<(std::ostream &out, const Sorcerer &sorc);

#endif