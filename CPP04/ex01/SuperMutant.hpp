/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:54:57 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/15 15:44:47 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SUPERMUTANT_HPP__
# define __SUPERMUTANT_HPP__

# include "Enemy.hpp"
# include <iostream>

class SuperMutant;

class SuperMutant : public Enemy
{
	public :
		SuperMutant();
		SuperMutant(SuperMutant const &copy);
		virtual ~SuperMutant();
		SuperMutant &operator=(SuperMutant &op);

		void takeDamage(int amount);
};

#endif