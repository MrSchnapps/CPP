/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 15:09:04 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/21 11:26:38 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	print_head()
{
	std::cout << " =============================================================================" << std::endl;
	std::cout << "|                                                                             |" << std::endl;
	std::cout << "|  ######  #    #  ######  #    #  ######     ####     ####    ####   #    #  |" << std::endl;
	std::cout << "|  #    #  #    #  #    #  ##   #  #          #   #   #    #  #    #  #  #    |" << std::endl;
	std::cout << "|  ######  ######  #    #  # #  #  ######     #####   #    #  #    #  # #     |" << std::endl;
	std::cout << "|  #       #    #  #    #  #  # #  #          #    #  #    #  #    #  #  #    |" << std::endl;
	std::cout << "|  #       #    #  ######  #   ##  ######     #####    ####    ####   #    #  |" << std::endl;
	std::cout << "|                                                                             |" << std::endl;
	std::cout << " =============================================================================" << std::endl;
}
int     main()
{
	bool		loop;
	std::string command;
	PhoneBook	phone_book;
	
	loop = true;
	print_head();
	while (loop)
	{
		phone_book.print_command();
		std::cin >> command;
		if (command == "ADD")
		{
			phone_book.setContact();
		}
		else if (command == "SEARCH")
		{
			phone_book.print_list();
		}
		else if (command == "EXIT")
		{
			std::cout << "Bye !" << std::endl;
			loop = false;
		}
	}
	return (0);
}