/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 18:47:06 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/01 00:11:49 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	
	std::string *pt = &str;
	std::string &ref = str;

	std::cout << "Pointer : " << *pt << std::endl;
	std::cout << "Reference : " << ref << std::endl;
	return (0);
}