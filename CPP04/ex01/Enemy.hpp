/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:36:19 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/15 12:46:18 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ENEMY_HPP__
# define __ENEMY_HPP__

# include <string>

class Enemy;

class Enemy
{
	private:
		Enemy();

		int			_hp;
		std::string	_type;
	
	public:
		Enemy(int hp, std::string const & type);
		virtual ~Enemy();
		Enemy(Enemy &copy);
		Enemy &operator=(Enemy &op);

		std::string const getType() const;
		int getHP() const;

		virtual void takeDamage(int amount);
};

#endif