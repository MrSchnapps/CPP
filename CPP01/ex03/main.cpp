/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 13:44:49 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/01 00:07:26 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
	std::srand(std::time(nullptr));
	{
		ZombieHorde horde(6);
		horde.announce();
	}
	std::cout << "------------------------" << std::endl;
	ZombieHorde horde_wrong(-5);
	horde_wrong.announce();

	std::cout << "------------------------" << std::endl;
	ZombieHorde horde(8);
	horde.announce();
	
	std::cout << "------------------------" << std::endl;
	return (0);
}