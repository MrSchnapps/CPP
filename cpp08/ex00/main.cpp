/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 23:29:35 by judecuyp          #+#    #+#             */
/*   Updated: 2021/03/12 14:39:58 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> cont;

	cont.push_back(0);
	cont.push_back(1);
	cont.push_back(2);
	cont.push_back(3);
	cont.push_back(4);

	if (easyfind(cont, 10) ==  cont.end())       	//pas trouve
		std::cout << "not found" << std::endl;
	else
		std::cout << "found" << std::endl;

	if (easyfind(cont, 0) ==  cont.end())			//trouve
		std::cout << "not found" << std::endl;
	else
		std::cout << "found" << std::endl;

	if (easyfind(cont, 3) ==  cont.end())			//trouve
		std::cout << "not found" << std::endl;
	else
		std::cout << "found" << std::endl;

	if (easyfind(cont, 4) ==  cont.end())			//trouve
		std::cout << "not found" << std::endl;
	else
		std::cout << "found" << std::endl;

	/*std::vector<char> cont2;
	cont2.push_back('j');
	cont2.push_back('u');
	cont2.push_back('l');
	if (easyfind(cont2, 4) ==  cont2.end())				 //Error compilation if we have an other type that int in parameter
		std::cout << "not found" << std::endl;
	else
		std::cout << "found" << std::endl;

	std::vector<long> cont3;
	cont3.push_back(1);
	cont3.push_back(2);
	cont3.push_back(3);
	if (easyfind(cont3, 4) == cont3.end())				 //Error compilation if we have an other type that int in parameter
		std::cout << "not found" << std::endl;
	else
		std::cout << "found" << std::endl;*/
	return (0);
}
