/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:10:24 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/15 15:37:06 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__

# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character;

class Character
{
	private:
		Character();

		std::string _name;
		int			_ap;
		AWeapon		*_weapon;
	
	public:
		Character(std::string const & name);
		Character(Character &copy);
		virtual ~Character();
		Character &operator=(Character &op);

		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);

		std::string const	getName() const;
		int					getAP() const;
		AWeapon				*getWeapon() const;

};

std::ostream &operator<<(std::ostream &out, const Character  &charac);

#endif