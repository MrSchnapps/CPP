/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 16:19:53 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/25 19:31:32 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	std::cout << "============= TEST =============" << std::endl;

	std::cout << "" << std::endl;
	std::cout << "Int object void + out of limits -----" << std::endl;
	Array<int> arrint; //Object size = 0
	try
	{
		arrint[0] = 19;
	}
	catch(std::exception& e)
	{
		std::cerr << "   " << e.what() << std::endl;
	}

	std::cout << "" << std::endl;
	std::cout << "float object (5) + out of limits -----" << std::endl;
	Array<float> arrfloat(5);
	try
	{
		arrfloat[0] = 4.12;
		arrfloat[1] = 26.11;
		arrfloat[2] = 25.4;
		arrfloat[3] = 19.19;
		arrfloat[4] = 42.42;
		
		std::cout << "   " << arrfloat[0] << " | " << arrfloat[1] << " | " << arrfloat[2] << " | " << arrfloat[3] << " | " << arrfloat[4] << std::endl;
		arrfloat[5] = 99.58;
		std::cout << "ouuuuuuuutttttttt" << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << "   " << e.what() << '\n';
	}

	std::cout << "" << std::endl;
	std::cout << "String object (3) + out of limits -----" << std::endl;
	Array<std::string> arrstring(3);
	try
	{
		arrstring[0] = "Yooo |";
		arrstring[1] = " cv les amis |";
		arrstring[2] = " ouuuii tres bieennn";
		std::cout << "   " << arrstring[0] << arrstring[1] << arrstring[2] << std::endl;
		arrstring[4] = "Le zeroo";
		std::cout << "ouuuuuuuutttttttt" << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << "   " << e.what() << '\n';
	}
	
	/*std::cout << "============= EQUAl =============" << std::endl;
	
	Array<int>eq1(3);
	eq1[0] = 1;
	eq1[1] = 2;
	eq1[2] = 3;

	std::cout << "Copy () -----" << std::endl;
	Array<int>eq2(eq1);
	eq2[0] = 4;
	eq2[1] = 5;
	eq2[2] = 6;
	std::cout << "   " << eq1[0] << eq1[1] << eq1[2] << std::endl;
	std::cout << "   " << eq2[0] << eq2[1] << eq2[2] << std::endl;

	std::cout << "Assignation (=) -----" << std::endl;
	Array<int>eq3(eq1);
	eq3 = eq2;
	eq3[0] = 7;
	eq3[1] = 8;
	eq3[2] = 9;
	std::cout << "   " << eq1[0] << eq1[1] << eq1[2] << std::endl;
	std::cout << "   " << eq2[0] << eq2[1] << eq2[2] << std::endl;
	std::cout << "   " << eq3[0] << eq3[1] << eq3[2] << std::endl;*/
	return (0);
}