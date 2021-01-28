/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:20:58 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/28 21:11:24 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {}

Human::~Human() {}

/*
** I use a reference for return the exact variable instead a copy
** We can't use a pointer because we need to call the 
** function with a " . " instead a " -> "
*/

Brain			&Human::getBrain() 
{
	return (this->_brain);
}

std::string		Human::identify()
{
	return (this->_brain.identify());
}