/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:38:26 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/31 23:47:12 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony pony;

	std::cout << "We are on the Stack." << std::endl;
	pony.sayMyName();
	pony.neigh();
	std::cout << "Deleting pony on the Stack" << std::endl;
}

void    ponyOnTheHeap()
{
	Pony *pony = new Pony("Petit Tonnerre", "Brown");

	std::cout << "We are on the Heap." << std::endl;
	pony->sayMyName();
	pony->neigh();
	std::cout << "Deleting pony on the Heap" << std::endl;
	delete pony;
}

int		main()
{
	ponyOnTheStack();
	std::cout << std::endl;
	ponyOnTheHeap();
	return (0);
}