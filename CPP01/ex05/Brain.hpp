/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:20:43 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/28 20:07:52 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>
# include <string>

class Brain
{
	public:
		Brain();
		~Brain();

		int			getNeurons();
		void		setNeurons(int nb);

		std::string	identify();
		
	private:
		int _neurons;

};
#endif