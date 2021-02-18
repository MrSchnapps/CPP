/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Gremlins.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:07:57 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/18 12:08:32 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __GREMLINS_HPP__
# define __GREMLINS_HPP__

#include "Victim.hpp"

class Gremlins;

class Gremlins: public Victim
{
	public:
		Gremlins(std::string name);
		virtual~Gremlins();
		Gremlins(const Gremlins &copy);
		Gremlins &operator=(Gremlins &op);

		void getPolymorphed() const;	

	private:
		Gremlins();
};

#endif