/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 11:57:23 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/15 14:53:12 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PLASMARIFLE_HPP__
# define __PLASMARIFLE_HPP__

# include "AWeapon.hpp"
# include <iostream>

class PlasmaRifle;

class PlasmaRifle : public AWeapon
{
	public :
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &copy);
		virtual ~PlasmaRifle();
		PlasmaRifle &operator=(PlasmaRifle &op);

		void		attack() const;
};

#endif