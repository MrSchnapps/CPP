/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 13:05:33 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/19 13:53:24 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(int argc, char **argv)
{
	std::string str1 ("shhhhh... I think the students are asleep...");
	std::string str2 ("Damnit");
	std::string str3 (" ! ");
	std::string str4 ("Sorry students, I thought this thing was off.");

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (argc == 2 && str1.compare(argv[1]) == 0)
		std::cout << "SHHHHH... I THINK THE STUDENTS ARE ASLEEP..." << std::endl;
	else if (argc == 4 && !str2.compare(argv[1]) && !str3.compare(argv[2]) && !str4.compare(argv[3]))
		std::cout << "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF." << std::endl;
	else
		std::cout << std::endl;
	return (0);
}
