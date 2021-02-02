/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:22:13 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/01 00:28:58 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int		printerr(int code)
{
	if (code == ARGERR)
	{
		std::cout << "Wrong Number of arguments." << std::endl;
		std::cout << "Arguments :" << std::endl;
		std::cout << "    <Filename>    <s1>    <s2>" << std::endl;
	}
	else if (code == NULLERR)
		std::cout << "Your arguments cannot be null." << std::endl;
	else if (code == FILEERR)
		std::cout << "Wrong path/name of file." << std::endl;
	return (code);
}

void	cut_file(std::string &str, std::string s1, std::string s2)
{
	size_t start;

	start = 0;
	while ((start = str.find(s1, start)) != std::string::npos)
	{
		str.replace(start, s1.length(), s2);
		start += s2.length();
	}
}

int		main(int argc, char **argv)
{	
	if (argc != 4)
		return (printerr(ARGERR));

	std::string fName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (fName == "" || s1 == "" || s2 == "")
		return (printerr(NULLERR));
	std::ifstream file_r(argv[1]);
	if (!file_r)
		return (printerr(FILEERR));
	std::string file_text;
	std::getline(file_r, file_text);
	
	std::string reader;
	while (std::getline(file_r, reader))
	{
		file_text.append("\n");
		file_text.append(reader);
	}
	std::string &ref_text = file_text;
	cut_file(ref_text, s1, s2);
	
	file_r.close();	
	std::ofstream file_w(argv[1]);
	if (!file_w)
		return (printerr(FILEERR));
	file_w << file_text << std::endl;
	file_w.close();
	return (0);
}