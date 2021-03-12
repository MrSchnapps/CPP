/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 10:41:24 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/29 11:28:22 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon() {}

Weapon::Weapon(std::string type) {this->_type = type;}

Weapon::~Weapon() {}

const std::string	&Weapon::getType()
{
    return (this->_type);
}

void		Weapon::setType(std::string type)
{
    this->_type = type;
}