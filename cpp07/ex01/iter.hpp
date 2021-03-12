/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 13:57:51 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/25 18:35:02 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
# define __ITER_HPP__

# include <iostream>
# include <string>

template<typename T>
void	iter(T *array, unsigned int len, void (*f)(T const & ))
{
	size_t i = 0;

	while (i < len)
	{
		f(array[i]);
		i++;
	}
}

#endif