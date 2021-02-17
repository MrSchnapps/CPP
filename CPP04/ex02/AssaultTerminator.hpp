/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:26:59 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/17 12:30:30 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ASSAULTTERMINATOR_HPP__
# define __ASSAULTTERMINATOR_HPP__

# include "ISpaceMarine.hpp"

class AssaultTerminator;

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const &copy);
		virtual ~AssaultTerminator();
		AssaultTerminator &operator=(AssaultTerminator const &op);

		ISpaceMarine*	clone() const;
		void 			battleCry() const;
		void 			rangedAttack() const;
		void 			meleeAttack() const;
};

#endif