/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 21:52:28 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/18 00:46:48 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
# define __CURE_HPP__

# include "AMateria.hpp"

class Cure;

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &copy);
		virtual ~Cure();
		Cure &operator=(const Cure &op);

		AMateria*	clone(void) const;
		void		use(ICharacter&);
};

#endif