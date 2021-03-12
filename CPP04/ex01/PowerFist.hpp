/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:30:43 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/15 14:53:07 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POWERFIST_HPP__
# define __POWERFIST_HPP__

# include "AWeapon.hpp"
# include <iostream>

class PowerFist;

class PowerFist : public AWeapon
{
	public :
		PowerFist();
		PowerFist(PowerFist const &copy);
		virtual ~PowerFist();
		PowerFist &operator=(PowerFist &op);

		void		attack() const;
};

#endif