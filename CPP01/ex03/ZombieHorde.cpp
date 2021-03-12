/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 09:45:24 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/28 18:41:35 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) 
{
	int random;

	if (n <= 0)
	{
		std::cout << "Wrong number. The size is set on 1." << std::endl;
		this->setNb(1);
	}
	else if (n > 50019)
	{
		std::cout << n << " ? It's impossible !\nI think you mean 50 019 instead." << std::endl;
		this->setNb(50019);
	}
	else
	{
		this->setNb(n);
	}
	this->_zombies = new Zombie[this->getNb()];
	std::string str[30] = {"Ted", "Volt", "Archi", "Vixy", "Appa", "Souf",
						"Zip", "Feufeul", "Yuuk", "Terry", "Larry", "Jerry",
						"Jules", "Sami", "Moha", "Jerome", "Kremer", "Antho",
						"Luffy", "Zoro", "Sanji", "Nami", "Chopper", "Brook",
						"Ussop", "Francky", "Robin", "Jinbe", "Sunny", "Unkown"};

	for (int i = 0; i < this->getNb(); i++)
	{
		random = rand()%29 + 0;
		this->_zombies[i].setName(str[random]);
		this->_zombies[i].setType("Random");
	}	
};

ZombieHorde::~ZombieHorde()
{
	delete [] this->_zombies;
	std::cout << "The horde is destroyed." << std::endl;
};

void	ZombieHorde::setNb(int nb)
{
	this->_nb = nb;
}

int		ZombieHorde::getNb()
{
	return (this->_nb);
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < this->getNb(); i++)
	{
		this->_zombies[i].announce();
	}
}