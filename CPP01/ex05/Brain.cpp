/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:20:20 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/28 21:11:42 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->_neurons = 19;
}

Brain::~Brain() {}

int			Brain::getNeurons() {return (this->_neurons);}

void		Brain::setNeurons(int nb) {this->_neurons = nb;}

std::string	Brain::identify ()
{
	std::stringstream sstr;

	sstr << this;
	return (sstr.str());
}