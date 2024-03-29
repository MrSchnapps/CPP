/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 23:16:25 by judecuyp          #+#    #+#             */
/*   Updated: 2021/03/12 15:18:51 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	std::cout << "====== Simple tests ======" << std::endl;
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

// ~ 10 000 nb
	std::cout << std::endl;
	std::cout << "====== 10 000 ======" << std::endl;
	Span sp2 = Span(10000);
	sp2.addMostNumbers(0, 10000);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

// ~ 100 000 nb
	std::cout << std::endl;
	std::cout << "====== 100 000 ======" << std::endl;
	Span sp3 = Span(100003);
	sp3.addNumber(1);
	sp3.addNumber(50);
	sp3.addNumber(89);

	sp3.addMostNumbers(90, 100090);
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;

// Errors
	std::cout << std::endl;
	std::cout << "====== Errors ======" << std::endl;
	Span sp4 = Span(6);
	sp4.addNumber(2);
	try
	{
		std::cout << sp4.shortestSpan() << std::endl;
	
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;  //shortest span with a size = 1
	}
	try
	{
		std::cout << sp4.longestSpan() << std::endl;
	
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl; //longest span with a size = 1
	}

	sp4.addNumber(50);
	sp4.addNumber(89); //89 - 2 = 87 (MAX)
	sp4.addNumber(7);  //7 - 2 = 5 (MIN)
	sp4.addNumber(13);
	sp4.addNumber(56);
	try
	{ 
		sp4.addNumber(60);  //Add number with a full stock
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << sp4.shortestSpan() << std::endl;
	std::cout << sp4.longestSpan() << std::endl;
}
