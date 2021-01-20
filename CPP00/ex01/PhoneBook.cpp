/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 14:04:23 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/20 16:45:32 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->amount = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::setContact()
{
	int			i;
	std::string line;

	i = 0;
	if (this->amount == 8)
		std::cout << "The phone book is full" << std::endl;
	else
	{
		std::cout << "-------------------------" << std::endl;
		std::cout << "Please enter information:" << std::endl;
		this->list[this->amount].setIndex(this->amount + 1);
		while (i < 11)
		{
			std::cout << this->list[this->amount].getField(i) << std::endl;
			std::cout << "> ";
			std::cin >> line;
			this->list[this->amount].setInfo(line, i);
			i++;
		}
		this->amount++;
	}
	
}
void	PhoneBook::print_list()
{
	int i;

	i = 0;
	std::cout << " -------------------------------------------" << std::endl;
	std::cout << "|   Index  |First name| Last name| Nickname |" << std::endl;
	std::cout << " -------------------------------------------" << std::endl;
	if (this->amount == 0)
	{
		std::cout << "The phone book is empty" << std::endl;
		return ;
	}	
	while (i < this->amount)
	{
		this->list[i].print_index();
		i++;
	}
	this->choice();
}

void	PhoneBook::print_command()
{
	std::cout << std::endl;
	std::cout << "COMMAND LIST" << std::endl;
	std::cout << "-------------" << std::endl;
	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "EXIT" << std::endl;
	std::cout << "-------------" << std::endl;
	std::cout << std::endl;
	std::cout << "Please enter a command:" << std::endl;
	std::cout << "> ";
}

void PhoneBook::choice()
{
	int id;

	std::cout << std::endl;
	std::cout << "Introduce the index of your contact or 0 for quit:" << std::endl;
	std::cout << "> ";
	while (!(std::cin >> id) || id < 0 || id > this->amount)
	{
		std::cout << "Wrong index." << std::endl;
		std::cout << "Introduce the index of your contact or 0 for quit:" << std::endl;
		std::cout << "> ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}	
	if (id > 0)
		this->list[id - 1].display();
}