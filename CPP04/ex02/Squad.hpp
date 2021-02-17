/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:41:31 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/17 14:19:41 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SQUAD_HPP__
# define __SQUAD_HPP__

# include <iostream>
# include "ISquad.hpp"
# include "TacticalMarine.hpp"

class Squad;

class Squad : public ISquad
{
	public : 
		Squad();
		Squad(Squad &copy);
		virtual ~Squad();
		Squad	&operator=(Squad &op);

		int				getCount() const;
		ISpaceMarine*	getUnit(int) const;
		int				push(ISpaceMarine*);

		void			del_squad(void);

	private :
		ISpaceMarine	**_members;
		int				_count_members;
};

#endif