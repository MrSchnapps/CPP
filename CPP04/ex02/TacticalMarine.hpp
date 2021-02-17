/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:39:04 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/17 12:31:28 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __TACTICALMARINE_HPP__
# define __TACTICALMARINE_HPP__

# include "ISpaceMarine.hpp"

class TacticalMarine;

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine(TacticalMarine const &copy);
		virtual ~TacticalMarine();
		TacticalMarine &operator=(TacticalMarine const &op);

		ISpaceMarine*	clone() const;
		void 			battleCry() const;
		void 			rangedAttack() const;
		void 			meleeAttack() const;
};

#endif