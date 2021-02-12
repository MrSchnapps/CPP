/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Goblin.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:39:54 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/12 17:40:29 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __GOBLIN_HPP__
# define __GOBLIN_HPP__

#include "Victim.hpp"

class Goblin;

class Goblin: public Victim
{
	public:
		Goblin(std::string name);
		virtual~Goblin();
		Goblin(const Goblin &copy);
		Goblin &operator=(Goblin &op);

		void getPolymorphed() const;	

	private:
		Goblin();
};

#endif