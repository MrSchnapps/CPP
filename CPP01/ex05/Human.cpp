/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:20:58 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/01 00:17:12 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {}

Human::~Human() {}

/*
** I use a reference for return the exact variable instead a copy
*/

Brain			&Human::getBrain() 
{
	return (this->_brain);
}

std::string		Human::identify()
{
	return (this->_brain.identify());
}