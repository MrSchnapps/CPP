/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:55:58 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/25 12:56:50 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_HPP__
# define __WHATEVER_HPP__

# include <iostream>
# include <string>

template <typename T>
void 	swap (T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}

template <typename T>
T 		min (T &a, T &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T 		max (T &a, T &b)
{
	if (a > b)
		return (a);
	else
		return (b);	
}



#endif