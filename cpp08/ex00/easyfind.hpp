/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:17:07 by judecuyp          #+#    #+#             */
/*   Updated: 2021/03/12 14:43:40 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_HPP__
# define __EASYFIND_HPP__

# include <iostream>
# include <algorithm>
# include <vector>
# include <exception>

template <template < typename , typename > class T>
typename T<int, std::allocator<int> >::iterator easyfind(T<int, std::allocator<int> > &cont, int a)
{
	typename T<int, std::allocator<int> >::iterator ret = std::find(cont.begin(), cont.end(), a);
	return (ret);
}
#endif
