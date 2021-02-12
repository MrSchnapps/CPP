/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:50:22 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/12 17:28:33 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PEON_HPP__
# define __PEON_HPP__

#include "Victim.hpp"

class Peon;

class Peon: public Victim
{
	public:
		Peon(std::string name);
		virtual~Peon();
		Peon(const Peon &copy);
		Peon &operator=(Peon &op);

		void getPolymorphed() const;	

	private:
		Peon();
};

#endif