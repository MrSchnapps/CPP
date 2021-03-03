/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:17:07 by judecuyp          #+#    #+#             */
/*   Updated: 2021/03/03 17:14:29 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_HPP__
# define __EASYFIND_HPP__

# include <iostream>
# include <algorithm>
# include <vector>
# include <exception>

template <typename T>
typename T::iterator easyfind(T &cont, int a)
{
	typename T::iterator ret = std::find(cont.begin(), cont.end(), a);
	return (ret);
}
#endif