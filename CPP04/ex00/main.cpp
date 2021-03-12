/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:25:58 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/18 12:50:24 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"
#include "Goblin.hpp"
#include "Gremlins.hpp"

int main()
{
	{
		Sorcerer robert("Robert", "the Magnificent");

		Victim jim("Jimmy");
		Peon joe("Joe");

		std::cout << robert << jim << joe;
		robert.polymorph(jim);
		robert.polymorph(joe);
	}

	std::cout << std::endl;
	std::cout << "===========================================================================" << std::endl;
	std::cout << std::endl;

	Sorcerer robert("Robert", "the Magnificent");
	Goblin larry("Larry");
	

	std::cout << larry << std::endl;
	robert.polymorph(larry);

	std::cout << std::endl;
	
	Gremlins terry("Terry");
	std::cout << terry << std::endl;
	robert.polymorph(terry);
	
	return 0;
}