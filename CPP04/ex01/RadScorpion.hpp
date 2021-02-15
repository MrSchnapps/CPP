/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:02:15 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/15 15:44:41 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RADSCORPION_HPP__
# define __RADSCORPION_HPP__

# include "Enemy.hpp"
# include <iostream>

class RadScorpion;

class RadScorpion : public Enemy
{
	public :
		RadScorpion();
		RadScorpion(RadScorpion const &copy);
		virtual ~RadScorpion();
		RadScorpion &operator=(RadScorpion &op);
};

#endif