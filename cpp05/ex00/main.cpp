/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:24:11 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/21 12:07:35 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat terry("Terry", 160);
		P(terry);
		P("");
	}
	catch (std::exception &e)
	{
		e.what();
	}
	
	try
	{
		Bureaucrat larry("Larry", 0);
		P(larry);
		P("");
	}
	catch (std::exception &e)
	{
		e.what();
	}
	

	Bureaucrat jerry("Jerry", 150);
	P(jerry);
	try
	{
		jerry.downGrade();
	}
	catch (std::exception &e)
	{
		e.what();
	}
	P(jerry);
	jerry.upGrade();
	P(jerry);

	Bureaucrat henry("Henry", 1);
	P(henry);
	try
	{
		henry.upGrade();
	}
	catch (std::exception &e)
	{
		e.what();
	}
	P(henry);
	henry.downGrade();
	P(henry);
	return (0);
}