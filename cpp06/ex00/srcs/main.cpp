/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 23:38:48 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/23 11:53:01 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char **argv)
{
	Convert		conv;
	long double	to_convert = 0;

	if (argc != 2)
	{
		std::cout << "Error : Wrong number of arguments." << std::endl;
		return (EXIT_FAILURE);
	}
	conv.setInput(argv[1]);
	if (!conv.parsing(to_convert))
	{
		std::cout << "Error : Argument must be a char / int / float / double / +inf / -inf / nan." << std::endl;
		return (EXIT_FAILURE);
	}
	double d = static_cast<double>(to_convert);
	conv.toChar(d);
	conv.toInt(d);
	conv.toFloat(d);
	conv.toDouble(d);
	return (0);
}
