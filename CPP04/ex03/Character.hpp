/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 22:12:42 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/18 00:50:23 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__

# include "ICharacter.hpp"

class Character;

class Character: public ICharacter
{
	private:
		Character();

		std::string _name;
		AMateria	*_inventory[4];
		int			_materia_equiped;			

	public:
		Character(std::string const &name);
		Character(const Character &copy);
		virtual ~Character();
		Character &operator=(const Character &op);

		std::string const	&getName() const;
		int					getMateriaEquiped() const;
		AMateria			*getMateria(int) const;

		void				equip(AMateria* m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter& target);
};
#endif