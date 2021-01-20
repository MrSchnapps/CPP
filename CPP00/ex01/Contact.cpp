/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 14:04:30 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/20 15:56:00 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->fields[0] = "first name";
	this->fields[1] = "last name";
	this->fields[2] = "nickname";
	this->fields[3] = "login";
	this->fields[4] = "postal adress";
	this->fields[5] = "email adress";
	this->fields[6] = "phone number";
	this->fields[7] = "birthday date";
	this->fields[8] = "favorite meal";
	this->fields[9] = "underwear color";
	this->fields[10] = "darkest secret";
}

Contact::~Contact()
{
}

const	std::string Contact::getField(int i)
{
	return (this->fields[i]);
}

void	Contact::setIndex(int id)
{
	this->index = id;
}

void	Contact::setInfo(const std::string str, int i)
{
	this->infos[i] = str;
}

void	Contact::print_index()
{
	int i;

	i = 0;
	std::cout << "|";
	std::cout << std::setw(10) << this->index;
	while (i < 3)
	{
		std::cout << "|";
		if (this->infos[i].length() > 10)
			std::cout << this->infos[i].substr(0, 10);
		else
			std::cout << std::setw(10) << this->infos[i];
		i++;
	}
	std::cout << "|" << std::endl;
	
}

void	Contact::display()
{
	int i;

	i = 0;
	while (i < 11)
	{
		std::cout << this->fields[i] + ": " + this->infos[i] << std::endl;
		i++;
	}
}

