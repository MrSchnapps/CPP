/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 23:29:35 by judecuyp          #+#    #+#             */
/*   Updated: 2021/03/03 17:15:05 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> cont = {0,1,2,3,4};

	if (easyfind(cont, 10) ==  cont.end())       	//pas trouve
		std::cout << "pas trouve" << std::endl;
	else
		std::cout << "trouve" << std::endl;

	if (easyfind(cont, 0) ==  cont.end())			//trouve
		std::cout << "pas trouve" << std::endl;
	else
		std::cout << "trouve" << std::endl;

	if (easyfind(cont, 3) ==  cont.end())			//trouve
		std::cout << "pas trouve" << std::endl;
	else
		std::cout << "trouve" << std::endl;

	if (easyfind(cont, 4) ==  cont.end())			//trouve
		std::cout << "pas trouve" << std::endl;
	else
		std::cout << "trouve" << std::endl;

	/*std::vector<char> cont2= {'a', 'b', 'c'};
	if (easyfind(cont2, 4) ==  cont.end())				 //Error compilation if we have an other type that int in parameter
		std::cout << "pas trouve" << std::endl;
	else
		std::cout << "trouve" << std::endl;*/
	return (0);
}