/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:25:41 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/31 23:48:00 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
	public:
		Pony();
		Pony(std::string name, std::string color);
		~Pony();
		void		setName(std::string name);
		void		setColor(std::string color);
		std::string	getName();
		std::string	getColor();
		void		neigh();
		void		sayMyName();	

	private:
		std::string name;
		std::string color;

};

#endif