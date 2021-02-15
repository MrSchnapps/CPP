/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 18:07:58 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/15 12:20:44 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AWEAPON_HPP__
# define __AWEAPON_HPP__

# include <string>

class AWeapon;

class AWeapon
{
	private:
		AWeapon();

		std::string	_name;
		int			_apcost;
		int			_damage;

	public:
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon();
		AWeapon(AWeapon &copy);
		AWeapon &operator=(AWeapon &op);

		std::string const	getName() const;
		int 				getAPCost() const;
		int					getDamage() const;

		virtual void		attack() const = 0;
};

#endif