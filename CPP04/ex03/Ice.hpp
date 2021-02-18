/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 21:33:25 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/17 21:54:57 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
# define __ICE_HPP__

# include "AMateria.hpp"

class Ice;

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice &copy);
		virtual ~Ice();
		Ice &operator=(const Ice &op);

		AMateria	*clone(void) const;
		void		use(ICharacter&);
};

#endif