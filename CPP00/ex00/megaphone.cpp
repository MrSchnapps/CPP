/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 13:05:33 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/20 16:42:07 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(int argc, char **argv)
{
	int 		av_n;
	std::string	str;
	
	av_n = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[av_n])
		{
			str = argv[av_n];
			for (unsigned int i = 0; i < (unsigned int)str.length(); i++)
				str[i] = toupper(str[i]);
			std::cout << str;
			av_n++;
		}
		std::cout << std::endl;
	}
	return (0);
}
