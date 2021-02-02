/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 10:51:26 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/29 14:46:41 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
: _name(name), _weapon(NULL)
{}

HumanB::~HumanB() {}

void			HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void			HumanB::attack()
{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}