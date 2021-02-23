/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:20:09 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/23 13:15:45 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIALIZATION_HPP__
# define __SERIALIZATION_HPP__

# include <iostream>
# include <cstdlib>
# include <ctime>

typedef struct		s_data
{
	std::string		s1;
	int				n;
	std::string		s2;
}					Data;
#endif